#include <stdio.h>
int main(void)
{
    int a[5][3],transpose[3][5];
    for (int i=0;i<5;++i) for (int j=0;j<3;++j) {
        a[i][j]=i+j;
        transpose[j][i]=a[i][j];
    }
    puts("original:");
    for (int i=0;i<5;++i) {
        for (int j=0;j<3;++j) printf("%d%c",a[i][j],j==2?'\n':' ');
    }
    puts("transpose:");
    for (int i=0;i<3;++i) {
        for (int j=0;j<5;++j) printf("%d%c",transpose[i][j],j==4?'\n':' ');
    }
    return 0;
}
