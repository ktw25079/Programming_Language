#include <stdio.h>
#include <stddef.h>
static void copy_array(const int source[],int destination[],size_t count)
{
    for (size_t i=0;i<count;++i) destination[i]=source[i];
}
int main(void)
{
    const int source[]={3,-1,4,1,5};
    int destination[5];
    copy_array(source,destination,5);
    for (int i=0;i<5;++i) printf("%d%c",destination[i],i==4?'\n':' ');
    return 0;
}
