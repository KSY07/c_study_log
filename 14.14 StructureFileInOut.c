//
// Created by 김세영 on 2023/04/26.
//
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

struct book
{
    char name[SLEN];
    char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n);
void read_books2(const char* filename, struct book** books_dptr, int* n);


int main() {

    int temp;
    int n = 3;

    struct book* my_books = (struct book*)malloc(n* sizeof(struct book));

    my_books[0] = (struct book){"The Great Gatsby", "F. Scott Fitzgerald"};
    my_books[1] = (struct book){"Hamlet", "William Shakespeare"};
    my_books[2] = (struct book){"The Odyssey", "Homer"};

    print_books(my_books, 3);

    printf("\nWriting to a file.\n");
    write_books("books.txt", my_books, n);
    free(my_books);
    n=0;
    printf("Done.\n");

    printf("\nPress any key to read data from a file.\n\n");
    temp = getchar();

    my_books = read_books("books.txt", &n);
    print_books(my_books, n);
    free(my_books);
    n=0;

    return 0;
}

void print_books(const struct book* books, int n) {
    for(int i = 0; i < n; i++) {
        printf("Book %d : \"%s\" written by \"%s\"\n", i+1, books[i].name, books[i].author);
    }
}

void write_books(const char* filename, const struct book* books, int n) {
    FILE* ptr;
    ptr = fopen(filename, "w");
    if(ptr == NULL) exit(1);

    fprintf(ptr, "%d\n", n); // number of books

    for(int i = 0; i < n; i++) {
        fprintf(ptr, "%s\n%s\n", books[i].name, books[i].author);
    }

    fclose(ptr);
}

struct book* read_books(const char* filename, int* n) {
    FILE* ptr;
    ptr = fopen(filename, "r");
    if(ptr == NULL) exit(1);

    int flag;
    flag = fscanf(ptr, "%d%*c", n);
    if(flag != 1) exit(1);

    struct book* books = (struct book*)calloc(sizeof(struct book), *n);

    if(!books) exit(1);

    for (int i = 0; i < *n; ++i) {
        flag = fscanf(ptr, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

        if (flag !=2) {
            exit(1);
        }
    }

    fclose(ptr);

    return books;
}

