#include <stdio.h>
#include "guess.h"
int main(void)
{
    int input;
    initialize_game();
    while (scanf("%d",&input)==1) {
        if (input<1 || input>100) return 1;
        if (input==target) { puts("correct"); return 0; }
        puts(input<target ? "higher" : "lower");
        fflush(stdout);
    }
    return 1;
}
