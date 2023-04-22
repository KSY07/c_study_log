//
// Created by 김세영 on 2023/04/18.
//
#include <stdio.h>
#include <string.h>

void custom_strcat(char* str1, char* str2);
void custom_strncat(char* str1, char* str2, int n);

int main() {

//    char str1[100] = "First String";
//    char str2[] = "Second string";
//
//    custom_strncat(str1,str2,2);
//    puts(str1);

    /* strcmp() and strncmp() : compare strings(not characters) */

//    printf("%d\n", strcmp("A", "A"));
//    printf("%d\n", strcmp("A", "B"));
//    printf("%d\n", strcmp("B", "A"));
//
//    printf("%d\n", strncmp("Bananas", "Banana", 6));
//
//    return 0;

    /* strcpy() and strncpy() */
//    char dest[100] = "";
//    char source[] = "Start Programming!";
//    strcpy(dest, source);
//    strncpy(dest, source, 5); // '\0' is NOT Added;
//    strcpy(dest, source + 6);
//    puts(dest);

    /*
     * sprintf()
     */

    char str[100] = "";
    int i = 123;
    double d = 3.14;
    sprintf(str, "%05d.png %f", i, d);
    puts(str);

    /*
     * There are more functions....
     */

    printf("%s\n", strchr("Hello, World", 'W')); // W가 시작되는 위치를 찾아 포인터 리턴
    printf("%s\n", strpbrk("Hello, World", "ABCDE"));// ABCDE중에 해당하는 포인터 리턴
    printf("%s\n", strrchr("Hello, World, Hello, World", 'l')); // l이 나타나는 마지막 포인터 리턴
    printf("%s\n", strstr("Hello, World", "wor")); // wor로 시작하는 포인터 리턴
    printf("%s\n", strstr("Hello, World", "Wor"));

}

void custom_strcat(char* str1, char* str2) {
    while(*str1 != '\0') {
        str1++;
    }
    while(*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

void custom_strncat(char* str1, char* str2, int n) {
    while(*str1 != '\0') {
        str1++;
    }

    for(int i = 0; i <= n; ++i) {
        *str1 = *str2;
        str1 += i;
        str2 += i;
    }
}