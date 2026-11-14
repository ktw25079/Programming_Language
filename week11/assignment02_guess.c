#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int input,guess;
    srand((unsigned)time(NULL));
    guess=rand()%100+1;
    while (scanf("%d",&input)==1) {
        if (input<1 || input>100) return 1;
        if (input==guess) { puts("correct"); return 0; }
        puts(input<guess ? "higher" : "lower");
    }
    return 1;
}
