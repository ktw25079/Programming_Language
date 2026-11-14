#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2 || !isfinite(a) || !isfinite(b) ||
        fabs(a)>1e100 || fabs(b)>1e100) return 1;
    printf("sum=%.3f difference=%.3f product=%.3f\n", a+b, a-b, a*b);
    if (b == 0.0 || !isfinite(a/b)) puts("quotient=undefined");
    else printf("quotient=%.3f\n", a/b);
    return 0;
}
