//
// Created by 김세영 on 2023/04/16.
//
#include <stdio.h>
#include <string.h>
#define STRLEN 81

int main() {

    /* Creating Space */
//    char* name = ""; // Error at RUN-TIME
//    char name[128];
//    int result = scanf("%s", name);

    /*
     * scanf() vs gets()
     * scanf() reads one word
     * gets() reads one line and removes \n and add \0
     */
//    char words[STRLEN] = ""; //Warning without initialization
//    gets(words); // gets receives pointer. No idea when string ends.
//    printf("START\n");
//    printf("%s", words); // no \n at the end
//    puts(words); // puts() adds \n at the end
//    puts("END.");

//    //TODO: try char words[5];
//
//    /* fgets() and fputs() */
//    char words[STRLEN] = "";
//    fgets(words, STRLEN, stdin); // does NOT remove \n
//
//    //TODO: replace '\n' with '\0'
//    for(int i =0; i < STRLEN; i++) {
//        if(words[i] == '\n') words[i] = '\0';
//    }
//
//    fputs(words, stdout);        // Does Not Add \n
//    fputs("END", stdout);
//
//    /* Small Array */
//    char small_array[5];
//    puts("Enter long strings:");
//    printf("%p\n", small_array);
//    printf("%p\n", fgets(small_array,5,stdin));
//    fgets(small_array, 5, stdin);
//    fputs(small_array, stdout);

    /* Repeating short reading */

    char small_array[5];
    puts("Enter long strings:");
    while (fgets(small_array, 5, stdin))

    return 0;

}