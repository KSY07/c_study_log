//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    int ch;
    FILE* fr, *fw;

    const char* in_filename = "원본_ansi.txt";
    const char* out_filename = "사본_ansi.txt";

    unsigned int count = 0;

    fr = fopen(in_filename, "r");
    fw = fopen(out_filename, "w");

    while((ch = fgetc(fr)) != EOF) {
        fputc(ch, stdout);
        fputc(ch, fw);
    }

    fclose(fr); fclose(fw);

    return 0;

}