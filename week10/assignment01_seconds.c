#include <stdio.h>
int to_seconds(int hour,int minute,int second);
int main(void)
{
    int h,m,s;
    do {
        if (scanf("%d %d %d",&h,&m,&s)!=3 || h<0 || h>596522 ||
            m<0 || m>59 || s<0 || s>59) return 1;
        if (h==0 && m==0 && s==0) break;
        printf("seconds=%d\n",to_seconds(h,m,s));
    } while (1);
    return 0;
}
int to_seconds(int hour,int minute,int second)
{
    return hour*3600+minute*60+second;
}
