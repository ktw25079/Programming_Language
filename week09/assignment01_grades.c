#include <stdio.h>
int main(void)
{
    int scores[5],sum=0;
    double average;
    char grade;
    for (int i=0;i<5;++i) {
        if (scanf("%d", &scores[i])!=1 || scores[i]<0 || scores[i]>100) return 1;
        sum+=scores[i];
    }
    average=sum/5.0;
    if (average>=90) grade='A';
    else if (average>=80) grade='B';
    else if (average>=70) grade='C';
    else if (average>=60) grade='D';
    else grade='F';
    printf("average=%.2f grade=%c\n", average,grade);
    return 0;
}
