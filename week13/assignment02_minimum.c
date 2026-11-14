#include <stdio.h>
#include <stddef.h>
static const int *find_minimum(const int *a,size_t count)
{
    const int *minimum=a;
    for (size_t i=1;i<count;++i) if (*(a+i)<*minimum) minimum=a+i;
    return minimum;
}
int main(void)
{
    const int a[]={8,-3,5,-3,9};
    const int *minimum=find_minimum(a,sizeof(a)/sizeof(a[0]));
    printf("minimum=%d index=%td\n",*minimum,minimum-a);
    return 0;
}
