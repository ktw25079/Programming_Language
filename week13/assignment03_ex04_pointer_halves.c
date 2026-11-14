#include <stdio.h>
#include <limits.h>
#include <string.h>
int main(void)
{
    int value=0x000000FF;
    int *pi=&value;
    short halves[2];
    short *ps=halves;
    unsigned char representation[sizeof(value)];
    if (CHAR_BIT!=8 || sizeof(int)!=4 || sizeof(short)!=2) return 1;
    memcpy(representation,&value,sizeof(value));
    if (representation[0]!=0xFF) return 1; /* This exercise assumes little endian. */
    printf("%d\n",*pi);
    /* Use a real short array instead of aliasing an int through short *. */
    memcpy(halves,&value,sizeof(value));
    *(ps+1)=0x000F;
    memcpy(&value,halves,sizeof(value));
    printf("%hd %hd\n",*ps,*(ps+1));
    return *pi!=0x000F00FF;
}
