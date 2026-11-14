#include <stdio.h>
int main(void)
{
    for (char end='A'; end<='Z'; ++end) {
        for (char ch='A'; ch<=end; ++ch) putchar(ch);
        putchar('\n');
    }
    return 0;
}
