#include <stdio.h>
int main(void)
{
    int ch=getchar();
    if (ch>='A' && ch<='Z') ch=ch-'A'+'a';
    if (ch<'a' || ch>'z') { puts("error: alphabet required"); return 1; }
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u': puts("vowel"); break;
        default: puts("consonant"); break;
    }
    return 0;
}
