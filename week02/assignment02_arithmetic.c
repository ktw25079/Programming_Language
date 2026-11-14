#include <stdio.h>
static void print_operations(double a, double b)
{
    printf("sum=%.3f difference=%.3f product=%.3f\n", a+b, a-b, a*b);
    if (b == 0.0) {
        puts("quotient=undefined (division by zero)");
    } else {
        printf("quotient=%.3f\n", a/b);
    }
}
int main(void)
{
    double a = 12.5, b = 2.5;
    print_operations(a, b);
    a = 8.0;
    b = 0.0;
    print_operations(a, b);
    return 0;
}
