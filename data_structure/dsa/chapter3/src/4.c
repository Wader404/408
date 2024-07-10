#include <stdio.h>
#include <stdlib.h>

#include "include/linked_stack.h"

float suffix(Linked_stack *l)
{
    float t_a = 0;
    float t_b = 0;
    char ch = getchar();

    while (ch != '$') {
        if (ch >= '0' && ch <= '9' && ch != ' '){
            push(&(*l), atoi(&ch));
        }

    switch (ch) {
        case '+':
            t_a = pop(&(*l));
            t_b = pop(&(*l));
            push(&(*l), t_a + t_b);
            break;
        case '-':
            t_a = pop(&(*l));
            t_b = pop(&(*l));
            push(&(*l), t_a - t_b);
            break;
        case '*':
            t_a = pop(&(*l));
            t_b = pop(&(*l));
            push(&(*l), t_a * t_b);
            break;
        case '/':
            t_a = pop(&(*l));
            t_b = pop(&(*l));
            push(&(*l), t_b / t_a);
            break;
        }

            ch = getchar();
    }

    return pop(&(*l));
}

int main(void)
{
    Linked_stack l;
    init_linked_stack(&l);

    printf("please input: ");

    printf("%f", suffix(&l));

    return 0;
}
