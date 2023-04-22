//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h> // time()
#include "12.12CustomRandomNumberCreator.h"

int main() {
    /*
     * rand()
     * - 0 to RAND_MAX (typically INT_MAX)
     * - defined in stdlib.h
     */

////    srand(4); // random seed // computer cannot perfect randomize
//    srand((unsigned int) time(0)); // seed change about time
////    for (int i = 0; i < 10; ++i) {
////        printf("%d\n", rand());
////        printf("%d\n", rand()%6 + 1);
////    }
//
//    unsigned int next = 1; // seed
//    for (int i = 0; i < 10; ++i) {
//        // use overflow (psuedo random number create)
//        next = next * 1103515245 + 1234; // overflow
//        next = (unsigned int) (next / 65536) % 32768;
//        printf("%d\n", (int)next);
//    }
    my_srand((unsigned int)time(0));
    for(int i = 0; i < 10; i++) {
        printf("%d\n", my_rand()%6 +1);
    }

    return 0;
}