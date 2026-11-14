#include <stdio.h>
int nplus(int n)
{
    if (n<=0) return 0;
    return n+nplus(n-1);
}
int main(void)
{
    for (int n=1;n<=10;++n) printf("n=%d sum=%d\n",n,nplus(n));
    return 0;
}
