#include <stdio.h>
int main(void)
{
    char ch, converted;
    if (scanf(" %c", &ch)!=1) return 1;
    if (ch>='a' && ch<='z') converted=(char)(ch-'a'+'A');
    else if (ch>='A' && ch<='Z') converted=(char)(ch-'A'+'a');
    else { puts("error: alphabet required"); return 1; }
    printf("%c(%d) %c(%d)\n", ch,ch,converted,converted);
    return 0;
}
