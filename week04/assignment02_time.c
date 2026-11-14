#include <stdio.h>
#include "time_units.h"
int main(void)
{
    mytime hour, minute, second;
    if (scanf("%d %d %d", &hour, &minute, &second) != 3 ||
        hour < 0 || hour > 596522 || minute < 0 || minute > 59 ||
        second < 0 || second > 59) return 1;
    printf("seconds=%d\n", TO_SECONDS(hour, minute, second));
    return 0;
}
