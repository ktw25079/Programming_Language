#include <stdio.h>
int main(void)
{
    int a,b;
    if (scanf("%d %d", &a,&b)!=2) return 1;
    /* Widen before addition/subtraction so every 32-bit int pair is valid. */
    long long x=a,y=b;
    printf("%d\n", (x>y) && (!y));
    printf("%d\n", (x==y) || (x!=y));
    printf("%d\n", x && y && (x-y));
    printf("%d\n", (x<=y) && (x>=y) && (x==y));
    printf("%d\n", (x+y) || (x && (y-y)));
    printf("%d\n", (x-x) || (y-y) || (x-y));
    return 0;
}
