//
// Created by 김세영 on 2023/04/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
     * Well aligned structure
     */

    struct Aligned
    {
        int a;
        float b;
        double c;
    };

    /*
     * 0 1 3 4 5 6 7| 8 9 10 11 12 13 14 15|
     * | int a | float b | double c |
     *     4   +   4     +    8
     */

    struct Aligned a1, a2;

    printf("struct Aligned a1\n");
    printf("Sizeof %zd\n", sizeof(struct Aligned));
    printf("%lld\n", (long long)&a1);
    printf("%lld\n", (long long)&a1.a); // equals to &a1
    printf("%lld\n", (long long)&a1.b);
    printf("%lld\n", (long long)&a1.c);

    printf("\nstruct Aligned a2\n");
    printf("Sizeof %zd\n", sizeof(a2));
    printf("%lld\n", (long long)&a2);
    printf("%lld\n", (long long)&a2.a);
    printf("%lld\n", (long long)&a2.b);
    printf("%lld\n", (long long)&a2.c);

    /*
     * padding (struct member alignment)
     * - 1 word: 4 bytes in x86(32bit), 8 bytes in x64(64bit)
     * -> processor send data least 1 word
     */

    struct Padded1
    {
        char a;
        float b;
        double c;
    };

    /* Without padding
     * 0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15|16
     * |a|float b|double c           | ? ? ?  |
     * 1 + 4 + 8 = 13
     *
     * Without padding >> double c, take possession of 8 bytes, but x86 can send least 4byte (if processor was x64 can send 8byte at least)
     *                      so, double memory was cutted >> Padding empty memory, send all of them
     */

    /* With padding
     * 0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15|16
     * |char a|float b | double c             |
     * 4(char?) + 4 + 8 = 13
     */

    /**
     * compiler add 3bytes to empty memory
     **/

    struct Padded1 p1;

    printf("\nstruct Padded2 p2\n");
    printf("Sizeof %zd\n", sizeof(p1));
    printf("%lld\n", (long long)&p1);
    printf("%lld\n", (long long)&p1.a);
    printf("%lld\n", (long long)&p1.b);
    printf("%lld\n", (long long)&p1.c);


    struct Padded2
    {
        float a;
        double b;
        char c;
    };

    /*
     * |0 1 2 3 4 5 6 7| 8 9 10 11 12 13 14 15|
     * |float a double b         | char c ? ? ?|
     *
     * pad float a, char c
     *
     * |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|24
     * |float a        | double b            | char c                |
     * 8(float?) + 8 + 8(char?) = 24
     */

    struct Padded2 p2;

    printf("\nstruct Padded1 p1\n");
    printf("Sizeof %zd\n", sizeof(p2));
    printf("%lld\n", (long long)&p2);
    printf("%lld\n", (long long)&p2.a);
    printf("%lld\n", (long long)&p2.b);
    printf("%lld\n", (long long)&p2.c);

    struct Person
    {
        char name[41]; //member
        int age;
        float height;
    };

    struct Person mommy;

    printf("\nstruct Person\n");
    printf("%lld\n", (long long)& mommy.name[0]);
    printf("%lld\n", (long long)& mommy.age);
    printf("%lld\n", (long long)&mommy.height);
    printf("Sizeof %zd\n", sizeof(mommy)); // 41 + 4 + 4 = 49 ? >> send 4bytes one time, so it may be 52 bytes, because of padding

    struct Person f[4];

    printf("Size of structure array %zd\n", sizeof(f));

    // padding option compiler options (struct member alignment)

    return 0;
}