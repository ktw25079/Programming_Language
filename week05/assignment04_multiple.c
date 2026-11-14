#include <stdio.h>
#include <limits.h>
int main(void)
{
    int x,y;
    if (scanf("%d %d", &x,&y)!=2) return 1;
    if (x==0) { puts("undefined (zero divisor)"); return 1; }
    /* INT_MIN % -1 is undefined in C; every integer is a multiple of -1. */
    printf("multiple=%s\n", x==-1 || y%x==0 ? "yes" : "no");
    return 0;
}
