//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>

int main()
{
    FILE* fp;
    int ch;

    /* ungetc() >> read one character, reinsert to buffer*/
//    fp = fopen("../input.txt", "r");
//
//    ch = fgetc(fp);
//    fputc(ch, stdout); // print 'm'
//
//    ungetc(ch, fp); // reinsert to buffer
//    // ungetc((int)'A', fp); // reinsert custom char to buffer
//
//    ch = fgetc(fp);
//    fputc(ch, stdout); // print 'm'
//
//    ch = fgetc(fp);
//    fputc(ch, stdout);
//
//    fclose(fp);

    /* setvbuf() >> change buffer config */
    fp = fopen("../input.txt", "r");

    char buffer[32] = {'\0', }; // into setvbuf() >> use buffer buffer[32]

    setvbuf(fp, buffer, _IOLBF, sizeof(buffer)); // _IOLBF(Line Buffer), _IOFBF(Full), _IONBF(NoBuffer)

    ch = fgetc(fp); // read one character

    //but

    // dump buffer
    for(int i = 0; i < sizeof(buffer); ++i) { // >> All readed...
        printf("%c", buffer[i]);
    }
    printf("\n");

    fclose(fp);

    // Because buffer pre-read... and fgetc >> read from buffer.

    /* fflush() >> Writing all of data in buffer */

    // Writing a large amount of data
    // fflush(fp);

    return 0;
}