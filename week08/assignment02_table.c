#include <stdio.h>
int main(void)
{
    int n,again;
    do {
        if (scanf("%d", &n)!=1 || n<2 || n>9) return 1;
        for (int i=1; i<=9; ++i) printf("%d x %d = %d\n", n,i,n*i);
        if (scanf("%d", &again)!=1 || (again!=0 && again!=1)) return 1;
    } while (again);
    return 0;
}
