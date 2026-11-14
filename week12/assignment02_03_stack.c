#include <stdio.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int top=-1;
int isfull(void)
{
    return top==MAXSIZE-1;
}
int isempty(void)
{
    return top==-1;
}
int push(int value)
{
    if (isfull()) return 0;
    stack[++top]=value;
    return 1;
}
int pop(int *value)
{
    if (isempty()) return 0;
    *value=stack[top--];
    return 1;
}
int main(void)
{
    char command;
    int value;
    while (scanf(" %c",&command)==1) {
        if (command=='+') {
            if (scanf("%d",&value)!=1) return 1;
            puts(push(value)?"pushed":"full");
        } else if (command=='-') {
            if (pop(&value)) printf("popped=%d\n",value);
            else puts("empty");
        } else if (command=='q') return 0;
        else return 1;
    }
    return 0;
}
