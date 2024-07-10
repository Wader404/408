#include <stdio.h>

#include "include/linked_stack.h"

void spe_push(Linked_stack *ls, int e)
{
    if (e == -1) {
        if (get_top(*ls)) {
            printf("%d\n", pop(ls));
        } else {
            printf("stack empty!\n");
        }
    } else {
        push(ls, e);
    }
}

int main(void)
{
    Linked_stack ls;
    init_linked_stack(&ls);
    int e = 0;

    printf("ctrl+c to terminate\n");
    printf("please input numbers:\n");
    while (1) {
        scanf("%d", &e);
        spe_push(&ls, e);
    }

    return 0;
}
