#include <stdio.h>
int main(void)
{
    int ch=getchar();
    if (ch==EOF) return 1;
    printf("%c %#o %u %#x\n", ch, (unsigned)ch, (unsigned)ch, (unsigned)ch);
    return 0;
}
