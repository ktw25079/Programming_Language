#include <stdio.h>
int main(void)
{
    const double miles_per_kilometer=0.621371;
    printf("60 km = %.3f mile\n", 60*miles_per_kilometer);
    printf("80 km = %.3f mile\n", 80*miles_per_kilometer);
    printf("100 km = %.3f mile\n", 100*miles_per_kilometer);
    printf("120 km = %.3f mile\n", 120*miles_per_kilometer);
    return 0;
}
