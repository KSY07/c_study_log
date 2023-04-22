//
// Created by 김세영 on 2023/04/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    /*
     * string to integer, double, long
     * atoi(), atof(), atol()
     */
    /* Example 1 */
//    if (argc<3)
//        printf("Wrong Usage of %s\n", argv[0]);
//    else
//    {
//        int times = atoi(argv[1]);
//
//        for (int i =0; i< times; i++)
//            puts(argv[2]);
//    }

    /* Example 2 */
//    if(argc < 3)
//        printf("Wrong Usage of %s\n", argv[0]);
//
//    else
//    {
//        printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
//    }

    /* string to long, unsigned long, double strtol(), strtoul(), strtod() */
//    char str1[] = "1024Hello";
//    char* end; // 끝을 표현하는 end 포인터를 넣어줘야함
//    long l = strtol(str1, &end, 10); // 이중 포인터(문자열의 끝을표현하는 end 포인터 변수의 주소를 입력, 변환하다가 불가하면 end에 불가한 시점의 포인터를 반환해줌.)
//    printf("%s %ld %s %d\n", str1, l, end, (int)*end);

    /*
     * Numbers to strings
     * Use sprintf() instead of itoa(), ftoa()
     */
    // _itoa >> MacOS Haven't

}