#include <stdio.h>
#define PHI 3.141592
int main(void)
{
    const double radius = 2.4;
    printf("radius=%.3f circumference=%.6f area=%.6f\n",
           radius, 2.0*PHI*radius, PHI*radius*radius);
    return 0;
}
