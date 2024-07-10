#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 10

typedef struct {
    int top[2], bot[2];
    int *V;
    int m;
}DblStack;

void init(DblStack *stack)
{
    stack -> V = (int*)malloc(MAXSIZE*sizeof(int));
    for (int i = 0; i < MAXSIZE; i++) {
        stack ->V[i] = 0;
    }
    stack -> top[0] = -1;
    stack -> top[1] = MAXSIZE;
    stack -> bot[0] = -1;
    stack -> bot[1] = MAXSIZE;
    stack -> m = MAXSIZE;
}

bool is_empty(DblStack stack, int s)
{
    if (stack.top[s] == stack.bot[s]) {
        return true;
    } else {
        return false;
    }
}

bool is_full(DblStack stack)
{
    if (stack.top[0] + 1 == stack.top[1]) {
        return true;
    } else {
        return false;
    }
}

bool push(DblStack *stack, int s, int x)
{
    if (is_full(*stack)) {
        return false;
    }

    if (s == 0) {
        stack -> top[0]++;
        stack -> V[stack -> top[0]] = x;
        return true;
    } else {
        stack -> top[1]--;
        stack -> V[stack -> top[1]] = x;
        return true;
    }
}

int pop(DblStack *stack, int s)
{
    if (is_empty(*stack, s)) {
        return false;
    }

    if (s == 0) {
        return stack -> top[0]--;
    } else {
        return stack -> top[1]++;
    }
}

void traverse(DblStack stack)
{
    for (int i = 0; i < MAXSIZE; i++) {
        printf("%d ", stack.V[i]);
    }
    printf("\n");
}

int main(void)
{
    DblStack stack;
    init(&stack);
    printf("1 means positive, 0 means negetive\n\n");

    printf("is stack 0 empty? %d\n", is_empty(stack, 0));
    printf("is stack 1 empty? %d\n", is_empty(stack, 1));

    for (int i = 1; i < 6; i++) {
        push(&stack, 0, i);
    }
    for (int i = 6; i < 11; i++) {
        push(&stack, 1, i);
    }

    printf("\n-----after push-----\n");
    printf("is stack full? %d\n", is_full(stack));
    printf("elements in stack: ");
    traverse(stack);

    pop(&stack, 0);
    pop(&stack, 1);
    pop(&stack, 1);

    printf("\n\n-----after pop-----\n");
    printf("is stack full? %d\n", is_full(stack));
    printf("elements in stack: ");
    traverse(stack);

    return 0;
}
