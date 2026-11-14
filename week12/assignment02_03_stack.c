#include <stdio.h>
#define CAPACITY 5
static int stack[CAPACITY];
static int count;
static int push(int value)
{
    if (count==CAPACITY) return 0;
    stack[count++]=value;
    return 1;
}
static int pop(int *value)
{
    if (count==0) return 0;
    *value=stack[--count];
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
