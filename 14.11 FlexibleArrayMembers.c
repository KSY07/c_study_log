//
// Created by 김세영 on 2023/04/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     * Flexible array member (struct hack in GCC)
     */

    struct flex
    {
        size_t count;
        double average;
        double values[];
    };

    const size_t n = 3;

    struct flex* pf = (struct flex*)malloc(sizeof(struct flex) + n * sizeof(double));
    if (pf==NULL) exit(1);

    printf("\nFlexible array member\n");
    printf("Sizeof struct flex %zd\n", sizeof(struct flex));
    printf("Sizeof *pf %zd\n", sizeof(*pf));
    printf("Sizeof malloc %zd\n", sizeof(struct flex) + n * sizeof(double));

    printf("%lld\n", (long long)pf);
    printf("%lld\n", (long long)&pf ->count);
    printf("%zd\n", sizeof(pf->count));
    printf("%lld\n", (long long)&pf->average);
    printf("Address of pf->values %lld\n", (long long)&pf->values);
    printf("Value of pf->values %lld\n", (long long)pf->values);
//    printf("Sizeof pf->values %zd\n", sizeof(pf->values));



    return 0;
}