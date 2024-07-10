#ifndef LINKED_STACK_H_ 
#define LINKED_STACK_H_ 

#include <stdbool.h>

typedef struct StackNode {
    int data;
    struct StackNode *next;
}Snode, *Linked_stack;

void init_linked_stack(Linked_stack *ls);
void push(Linked_stack *ls, int e);
int pop(Linked_stack *ls);


int get_top(Linked_stack ls);
#endif
