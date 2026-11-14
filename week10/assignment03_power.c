#include <stdio.h>
#include <limits.h>
int getMultiple(int x,int y);
int main(void)
{
    int x,y;
    if (scanf("%d %d",&x,&y)!=2 || x< -100 || x>100 || y<0 || y>30) return 1;
    /* Check each multiplication before calling the int-returning exercise function. */
    long long check=1;
    for (int i=0;i<y;++i) {
        check*=x;
        if (check<INT_MIN || check>INT_MAX) { puts("error: integer overflow"); return 1; }
    }
    printf("power=%d\n",getMultiple(x,y));
    return 0;
}
int getMultiple(int x,int y)
{
    int result=1;
    for (int i=0;i<y;++i) result*=x;
    return result;
}
