#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

typedef struct Lnode {
    int data;
    struct Lnode *next;
}Lnode, *Linked_list;


void init_list(Linked_list *L);
void head_insert(Linked_list *L, const int n);
void tail_insert(Linked_list *L, const int n);
// void sort_list(Linked_list *L, int increase);

int get_length(Linked_list L);
void traverse_list(Linked_list L);
int is_empty(Linked_list L);


#endif
