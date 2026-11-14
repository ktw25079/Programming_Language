#include <stdio.h>
static void print_matrix(int a[2][3])
{
    for (int i=0;i<2;++i) {
        for (int j=0;j<3;++j) printf("%d%c",a[i][j],j==2?'\n':' ');
    }
}
static void increase(int a[2][3],int n)
{
    for (int i=0;i<2;++i) for (int j=0;j<3;++j) a[i][j]+=n;
}
int main(void)
{
    int a[2][3]={{1,2,3},{4,5,6}},n;
    if (scanf("%d",&n)!=1 || n< -1000000 || n>1000000) return 1;
    puts("before:"); print_matrix(a);
    increase(a,n);
    puts("after:"); print_matrix(a);
    return 0;
}
