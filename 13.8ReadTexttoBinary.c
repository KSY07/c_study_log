//
// Created by 김세영 on 2023/04/23.
//
#include <stdio.h>

int main()
{
    FILE* fp  = fopen("test.txt", "rb");

    unsigned char ch;

    while (fread(&ch, sizeof(char), 1, fp) > 0)
    {
        printf("%hhu %c\n", ch, ch);
    }

    fclose(fp);

    return 0;
}