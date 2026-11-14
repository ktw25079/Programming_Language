#include <stdio.h>
#include <stddef.h>
const double *find_minimum(double a[], size_t size)
{
    double *minimum=a;
    for (double *p=a+1;p<a+size;++p) {
        if (*p<*minimum) minimum=p;
    }
    return minimum;
}
int main(void)
{
    double a[]={8.0,3.2,1.5,7.1,1.5};
    size_t size=sizeof(a)/sizeof(a[0]);
    const double *minimum=find_minimum(a,size);
    printf("minimum=%.1f index=%td\n",*minimum,minimum-a);
    return 0;
}
