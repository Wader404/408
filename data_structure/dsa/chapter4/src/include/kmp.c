#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Gen_Next(const char* arr, char* Next)
{
    int i = 1;
    int j = 0;
    Next[1] = 0;
    int len = strlen(arr);

    while (i < len) {
        if ((j == 0) || arr[i] == arr[j]) {
            i++;
            j++;
            Next[i] = j;
        } else {
            j = Next[j];
        }
    }
}

int KMP(char* txt, char* pat)
{
    int i = 0;
    int j = 0;
    int txt_len = strlen(txt);
    int pat_len = strlen(pat);
    char *Next = (char*)malloc((pat_len)*sizeof(char));

    if (txt_len == 0 || pat_len == 0) {
        return 1;
    }

    Gen_Next(pat, Next);

    while (i < txt_len && j < pat_len) {
        if (j == 0 || txt[i] == pat[j]) {
            i++;
            j++;
        } else {
            j = Next[j];
        }
    }

    if (j >= pat_len) {
        return i - pat_len;
    }
    return -1;
}

