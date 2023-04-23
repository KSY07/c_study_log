//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int ch;
    FILE* fr; //TODO: file pointer to write

    /*
     * typedef struct _iobuf
     * {
     *     char*  _ptr;
     *     int  _cnt;
     *     char*  _base;
     *     int _flag;
     *     int _file;
     *     int _charbuf;
     *     int _bufsiz;
     *     char* _tmpfname;
     * } FILE;
     */

    unsigned long count = 0;

    if(argc !=2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }

    if((fr = fopen(argv[1], "r")) == NULL) //Open a text file for reading.
    {
        printf("Can't not open %s\n", argv[1]);
        exit(1);
    }

    /*
     * fopen mode strings for text files
     * - r : reading
     * - w : creating-and-writing or over-writing
     * - a: appending or creating-and-writing
     * - r+: both reading and writing
     * - w+: reading and writing, over-writing or creating
     * - a+: reading and writing, appending or creating
     */

    //TODO: open file to write with "w" mode string

    while ((ch = fgetc(fr)) != EOF) // getc(fr) same but usually use fgetc(fr)

    {
        //putc(ch, stdout) // same as putchar(ch);
        fputc(ch, stdout); // save Standard Output, fputc was better & safety
        count++;
    }

    fclose(fr); // Must close file stream, if forgot close, it can be confusing for process for residual in buffer
    //TODO:

    printf("\nFILE %s has %lu characters\n", argv[1], count);


    return 0;
}