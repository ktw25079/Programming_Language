#include <stdio.h>
int main(void)
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int *p=a+10;
    /* Start one-past-end, decrement before dereferencing; never form a-1. */
    while (p!=a) {
        --p;
        printf("%d%c",*p,p==a?'\n':' ');
    }
    return 0;
}
