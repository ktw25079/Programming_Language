#include <stdio.h>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))
int main(void)
{
    int n;
    long long i=1;
    if (scanf("%d", &n)!=1 || n<1 || n>10000) return 1;
    while (i<=n) {
        printf("%lld %lld %lld\n", i,SQUARE(i),CUBE(i));
        ++i;
    }
    return 0;
}
