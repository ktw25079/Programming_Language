#include <stdio.h>
#include <math.h>
int main(void)
{
    const double principal=1000000.0, rate=0.045;
    int years;
    if (scanf("%d", &years)!=1 || years<0 || years>1000) return 1;
    printf("total=%.2f KRW\n", principal*pow(1.0+rate, years));
    return 0;
}
