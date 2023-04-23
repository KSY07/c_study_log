//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>
#include <stdlib.h>

/*
 * ABCDEF ....
 * Current position 0 and read -> A
 * Current position 1 and read -> B
 * ...
 */

int main() {

    int ch;
    long cur;

    FILE* fp = fopen("test.txt", "r");

    cur = ftell(fp); // notify current poistion
    printf("ftell() = %ld\n", cur);

    fseek(fp, 2L, SEEK_SET); // fseek >> move position fseek(pointer of file, (long) toBytes, mode_flag); SEEK_SET Flag >> from 0 >> toBytes
    cur = ftell(fp);
    printf("ftell() = %ld\n", cur);
    ch = fgetc(fp);
    printf("%d %c\n", ch, ch);
    cur = ftell(fp);
    printf("ftell() = %ld\n", cur);

    fseek(fp, -2L, SEEK_CUR); //SEEK_CUR Flag >> (current) >> (current + toBytes)
    cur = ftell(fp);
    printf("ftell() = %ld\n", cur);
    ch = fgetc(fp);
    printf("%d %c\n", ch, ch);

    /* SEEK_END */
    fseek(fp, 0L, SEEK_END); // SEEK_END Flag >> from EOF >> to Bytes
    ch = fgetc(fp);
    printf("%d %c\n", ch, ch);


    /* fsetpos(), fgetpos() set position, get position for fpos_t type*/

    fpos_t pt; // if file was so large
    pt = 10;
    fsetpos(fp, &pt); // returns 0 ok
    ch = fgetc(fp);
    printf("%d %c\n", ch, ch);
    fgetpos(fp, &pt); // returns 0 ok
    printf("%lld\n", pt); //NOTE: not meant to be read directly

    return 0;
}