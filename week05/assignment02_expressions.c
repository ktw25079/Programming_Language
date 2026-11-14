#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,x,y,f,c,qa,qb,qc,discriminant;
    /* a b x y Fahrenheit Celsius quadratic_a quadratic_b quadratic_c */
    if (scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf",
              &a,&b,&x,&y,&f,&c,&qa,&qb,&qc) != 9) return 1;
    const double inputs[] = {a,b,x,y,f,c,qa,qb,qc};
    for (int i=0; i<9; ++i) {
        if (!isfinite(inputs[i]) || fabs(inputs[i])>1e6) return 1;
    }
    printf("1=%.3f\n2=%.3f\n", (a+b)*(x+y)*(x+y), 4*x*x*x+3*x*x-5*x+10);
    if (a==b) puts("3=undefined");
    else printf("3=%.3f\n", (a+b)/(a-b));
    printf("4=%.3f\n5=%.3f\n", (5.0/9.0)*(f-32), (9.0/5.0)*c+32);
    if (x==0 || x*x==0 || !isfinite((1-x)/(x*x))) puts("6=undefined");
    else printf("6=%.3f\n", (1-x)/(x*x));
    discriminant=qb*qb-4*qa*qc;
    if (qa==0 || discriminant<0 || !isfinite((-qb+sqrt(discriminant))/(2*qa)))
        puts("7=undefined");
    else printf("7=%.3f\n", (-qb+sqrt(discriminant))/(2*qa));
    return 0;
}
