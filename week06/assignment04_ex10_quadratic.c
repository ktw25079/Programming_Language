#include <stdio.h>
#include <math.h>
int main(void)
{
    const double a=2.0, b=3.0, c=-4.0;
    double discriminant=b*b-4*a*c;
    double root1=(-b+sqrt(discriminant))/(2*a);
    double root2=(-b-sqrt(discriminant))/(2*a);
    double residual1=a*root1*root1+b*root1+c;
    double residual2=a*root2*root2+b*root2+c;
    printf("root1=%.3f residual=%.3f\n", root1, fabs(residual1));
    printf("root2=%.3f residual=%.3f\n", root2, fabs(residual2));
    return fabs(residual1)>1e-12 || fabs(residual2)>1e-12;
}
