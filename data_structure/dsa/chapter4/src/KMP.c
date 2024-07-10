#include <stdio.h>

#include "include/kmp.h"

int main(void)
{
    char txt[] = "abababcabc";
    char pat[] = "abcabc";
    char pos;

    pos = KMP(txt, pat);

    printf("%s\n%s\n%d\n", txt, pat, pos);

    return 0;
}
