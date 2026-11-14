#include <stdio.h>
double average(int korean,int math,int english);
char grade(double score);
int main(void)
{
    int k,m,e,again;
    double mean;
    do {
        if (scanf("%d %d %d",&k,&m,&e)!=3 || k<0 || k>100 ||
            m<0 || m>100 || e<0 || e>100) return 1;
        mean=average(k,m,e);
        printf("average=%.2f grade=%c\n",mean,grade(mean));
        if (scanf("%d",&again)!=1 || (again!=0 && again!=1)) return 1;
    } while (again);
    return 0;
}
double average(int korean,int math,int english)
{
    return (korean+math+english)/3.0;
}
char grade(double score)
{
    if (score>=90) return 'A';
    if (score>=80) return 'B';
    if (score>=70) return 'C';
    if (score>=60) return 'D';
    return 'F';
}
