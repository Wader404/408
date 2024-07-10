#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linked_stack.h"

//typedef struct StackNode {
//    int data;
//    struct StackNode *next;
//}Snode, *Linked_stack;

void init_linked_stack(Linked_stack *ls)
{
    (*ls) = NULL;
}

void push(Linked_stack *ls, int e)
{
    Linked_stack p = (Linked_stack)malloc(sizeof(Snode));
    p -> data = e;
    p -> next = *ls;
    *ls = p;
}
    
int pop(Linked_stack *ls)
{
    if ((*ls) == NULL) {
        return false;
    }

    Linked_stack p;

    int e = (*ls) -> data;
    p = *ls;
    *ls = (*ls) -> next;
    free(p);
    return e;
}






int get_top(Linked_stack ls)
{
    if (ls != NULL) {
        return ls -> data;
    } else {
        return false;
    }
}
