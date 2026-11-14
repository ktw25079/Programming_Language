#include <stdio.h>
int main(void)
{
    int a,b,c,maximum;
    if (scanf("%d %d %d", &a,&b,&c)!=3) return 1;
    maximum=a;
    if (b>maximum) maximum=b;
    if (c>maximum) maximum=c;
    printf("max=%d\n", maximum);
    return 0;
}
