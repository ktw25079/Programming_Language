#include <stdio.h>
int main(void)
{
    const int a[4][3]={{46,79,78},{35,57,28},{43,68,76},{56,78,98}};
    const int b[4][3]={{78,35,99},{85,82,34},{58,69,29},{34,59,35}};
    int sum[4][3],difference[4][3];
    for (int i=0;i<4;++i) for (int j=0;j<3;++j) {
        sum[i][j]=a[i][j]+b[i][j];
        difference[i][j]=a[i][j]-b[i][j];
    }
    puts("sum:");
    for (int i=0;i<4;++i) {
        for (int j=0;j<3;++j) printf("%d%c",sum[i][j],j==2?'\n':' ');
    }
    puts("difference:");
    for (int i=0;i<4;++i) {
        for (int j=0;j<3;++j) printf("%d%c",difference[i][j],j==2?'\n':' ');
    }
    return 0;
}
