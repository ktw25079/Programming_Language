#include <stdio.h>
int main(void)
{
    int n=0,sum=0;
    while (sum+(n+1)<=10000) {
        ++n;
        sum+=n;
    }
    printf("n=%d sum=%d next=%d\n", n,sum,sum+n+1);
    return 0;
}
