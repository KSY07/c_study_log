//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int ch;
    FILE* fr, *fw;

    const char* out_filename = "copy.txt";
    unsigned long count = 0;

    if (argc !=2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fr = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }

    if ((fw = fopen(out_filename, "w")) == NULL)
    {
        printf("Can't open %s\n", out_filename);
        exit(1);
    }

    while((ch = fgetc(fr)) != EOF)
    {
        fputc(ch, stdout); // same as putchar(ch);
        fputc(ch, fw);
        count++;
    }

    fclose(fr);
    fclose(fw);

    printf("\nFILE %s has %lu characters\n", argv[1], count);
    printf("Copied to %s", out_filename);


    return 0;
}
