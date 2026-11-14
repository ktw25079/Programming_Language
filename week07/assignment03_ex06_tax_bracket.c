#include <stdio.h>
int main(void)
{
    long long income;
    int rate;
    if (scanf("%lld", &income)!=1 || income<0) return 1;
    if (income<=12000000) rate=6;
    else if (income<=46000000) rate=15;
    else if (income<=88000000) rate=24;
    else if (income<=150000000) rate=35;
    else if (income<=300000000) rate=38;
    else if (income<=500000000) rate=40;
    else rate=42;
    printf("income=%lld KRW rate=%d%%\n", income, rate);
    return 0;
}
