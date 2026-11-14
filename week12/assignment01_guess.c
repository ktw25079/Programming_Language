#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guess.h"
int guess;
int main(void)
{
    int input;
    srand((unsigned)time(NULL));
    guess=rand()%100+1;
    while (scanf("%d",&input)==1) {
        if (input<1 || input>100) return 1;
        switch (testNum(input)) {
            case 0: puts("correct"); return 0;
            case -1: puts("lower"); break;
            case 1: puts("higher"); break;
        }
        fflush(stdout);
    }
    return 1;
}
