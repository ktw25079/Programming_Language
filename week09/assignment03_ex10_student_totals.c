#include <stdio.h>
int main(void)
{
    const int scores[5][4]={
        {97,90,88,95}, {76,89,75,83}, {60,70,88,82},
        {83,89,92,85}, {75,73,72,78}
    };
    for (int student=0;student<5;++student) {
        int sum=0;
        for (int exam=0;exam<4;++exam) sum+=scores[student][exam];
        printf("student%d total=%d average=%.2f\n", student+1,sum,sum/4.0);
    }
    return 0;
}
