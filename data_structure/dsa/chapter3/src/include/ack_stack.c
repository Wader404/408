#include <stdio.h>

#include "ack_stack.h"

//typedef struct {
//    int m;
//    int n;
//}elem;
//
//typedef struct {
//    elem data[MAXSIZE];
//    int top;
//}Ack_stack;

void init_ack(Ack_stack *as)
{
    as -> top = -1;
}

void push(Ack_stack *as, elem e)
{
    if (as -> top < MAXSIZE - 1) {
        as -> top++;
        as -> data[as -> top] = e;
    }
}

void pop(Ack_stack *as)
{
    if (as -> top != -1) {
        as -> top--;
    }
}

int is_empty(Ack_stack as)
{
    if(as.top == -1){
        return 1;
    } else {
        return 0;
    }
}

elem get_top(Ack_stack as)
{
    if (!is_empty(as)) {
        return as.data[as.top];
    } else {
        elem e;
        e.m = e.n = -1;
        return e;
    }
}

