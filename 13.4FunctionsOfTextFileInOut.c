//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main() {

    FILE* fp;
    char words[MAX] = {'\0',};

    const char* filename = "record";

    /*
     * fopen() mode strings for text files
     * - r: reading
     * - w: creating-and-writing or over-writing
     * - a: appending or creating-and-writing
     * - r+: both reading and writing
     * - w+: reading and writing, over-writing or creating
     * - a+: reading and writing, appending or creating
     */

    if((fp = fopen(filename, "r+")) == NULL) // Try r+, w+, a+
    {
        fprintf(stderr, "Can't open \"%s\" file. \n", filename);
        exit(EXIT_FAILURE);
    }

    while((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.')) {
        fprintf(fp, "%s\n", words);
    }

    rewind(fp); /* go back to beginning of file */

//    while((fgets(words, MAX, stdin) != NULL) && (words[0] != '.')) {
//        fputs(words, fp);
//    }

    while (fscanf(fp, "%s", words) == 1)
        fprintf(stdout, "%s\n", words);

    fclose(fp);



    return 0;
}