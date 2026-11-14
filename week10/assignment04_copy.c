#include <stdio.h>
void copyarray(int from[], int to[], int n)
{
    for (int i=0;i<n;++i) to[i]=from[i];
}
static void print_array(const char *name, const int a[], int n)
{
    printf("%s:",name);
    for (int i=0;i<n;++i) printf(" %d",a[i]);
    putchar('\n');
}
int main(void)
{
    int a[]={4,7,9,3,6};
    int b[]={10,20,30,40,50,60};
    print_array("a",a,5);
    print_array("b before",b,6);
    copyarray(a,b,5);
    print_array("b after",b,6);
    return 0;
}
