#include <stdio.h>
#include <math.h>
#define C2K(x) ((x) + 273.15)
#define C2F(x) ((x) * 1.8 + 32.0)
int main(void)
{
    double celsius;
    if (scanf("%lf", &celsius) != 1 || !isfinite(celsius) ||
        celsius < -273.15 || celsius > 1000000.0) return 1;
    printf("kelvin=%.3f fahrenheit=%.3f\n", C2K(celsius), C2F(celsius));
    return 0;
}
