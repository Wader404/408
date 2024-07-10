#include <stdio.h>

void insert(char* s, char* t, int pos)
{

}

int main(void)
{
    char s[100] = "abcdefghijklmn";
    char t[] = "HELLO";
    int pos = 0;

    printf("original string:    %s\n", s);
    printf("string to insert:   %s\n", t);
    printf("please input the position you want to insert: ");
    scanf("%d", &pos);

    insert(s, t, pos);

    printf("after insert");
    printf("%s", s);

    return 0;
}
