#include <stdio.h>
#include <limits.h>
#include <string.h>
_Static_assert(CHAR_BIT==8 && sizeof(int)==4 && sizeof(short)==2,
               "This exercise requires 8-bit bytes, 32-bit int and 16-bit short.");
int main(void)
{
    int value=0x000000FF;
    int *pi=&value;
    short halves[2];
    short *ps=halves;
    unsigned char representation[sizeof(value)];
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
