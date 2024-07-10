#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linked_list.h"

// typedef struct Lnode {
//     int data;
//     struct Lnode *next;
// }Lnode, *Linked_list
// Lnode represents node, *Linked_list represents head pointer

void init_list(Linked_list *L)
{
    (*L) = (Linked_list)malloc(sizeof(Lnode));
    (*L) -> data = 0;
    (*L) -> next = NULL;
}

void head_insert(Linked_list *L, const int n)
{
    Linked_list p;

    for (int i = 0; i < n; i++) {
        p = (Linked_list)malloc(sizeof(Lnode));
        scanf("%d", &(p -> data));
        p -> next = (*L) -> next;
        (*L) -> next = p;
    }
}

void tail_insert(Linked_list *L, const int n)
{
    Linked_list p, r;
    r = (*L);

    for (int i = 0; i < n; i++) {
        p = (Linked_list)malloc(sizeof(Lnode));
        scanf("%d", &(p -> data));
        p -> next = r -> next;
        r -> next = p;
        r = p;
    }
}


// functions do not change linked list
int get_length(Linked_list L)
{
    Linked_list p = L -> next;
    int i = 0;
    while(p) {
        i++;
        p = p -> next;
    }
    return i;
}

void traverse_list(Linked_list L)
{
    int n;
    n = get_length(L);
    Linked_list p = (Linked_list)malloc(sizeof(Lnode));
    p = L -> next;
    for (int i = 0; i < n; i++) {
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");
}

int is_empty(Linked_list L)
{
    if (L -> next) {
        return 0;
    } else {
        return 1;
    }
}
