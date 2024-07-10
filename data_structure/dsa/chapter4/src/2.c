#include <stdio.h>

#include "include/seq_stack.h"

void reverse(char* p)
{
    Seq_stack ss;
    init_seq_stack(&ss);

    for (int i = 0; i < 11 ;i++) {
        if (p[i] == '\0') {
            break;
        }
        push_seq_stack(&ss, p[i]);
    }
    for (int i = 0; i < 11; i++) {
        p[i] = (char)pop_seq_stack(&ss);
    }

}

int main(void)
{
    char str[11];
    for (int i = 0; i < 11; i++) {
        str[i] = '\0';
    }
    printf("please input string(less than 10 characters): ");
    scanf("%s", str);

    printf("%s\n", str);
    reverse(str);
    printf("after reverse\n");
    printf("%s\n", str);
    
    return 0;
}
