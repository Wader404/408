#include <stdio.h>
#include <string.h>

#include "include/seq_stack.h"

int main(void)
{
    char str[11], str_[11];
    Seq_stack ss;
    init_seq_stack(&ss);
    printf("please input string(less than 10 characters): ");
    scanf("%s", str);

    int length = (int)strlen(str);
    for (int i = 0; i < length; i++) {
        push_seq_stack(&ss, str[i]);
    }

    for (int i = 0; i < length; i++) {
        str_[i] = pop_seq_stack(&ss);
    }
    str_[length] = '\0';

    if (strcmp(str, str_) == 0) {
        printf("是回文序列\n");
    } else {
        printf("不是回文序列\n");
    }

    return 0;
}
