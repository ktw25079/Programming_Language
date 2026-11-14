#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b;
    if (scanf("%lf %lf", &a,&b)!=2 || !isfinite(a) || !isfinite(b) ||
        fabs(a)>1e100 || fabs(b)>1e100) return 1;
    printf("sum=%.6f average=%.6f\n", a+b, (a+b)/2.0);
    return 0;
}
