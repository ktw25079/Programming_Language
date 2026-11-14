#include <stdio.h>
#include <math.h>
int main(void)
{
    double width,height;
    if (scanf("%lf %lf", &width,&height)!=2 || !isfinite(width) ||
        !isfinite(height) || width<0 || height<0 || width>1e6 || height>1e6) return 1;
    printf("rectangle: %12.3f\n", width*height);
    printf("triangle:  %-12.3f\n", width*height/2.0);
    return 0;
}
