#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void merge_list(Linked_list *L1, Linked_list *L2, Linked_list *L)
{
    Linked_list p1 = (*L1) -> next;
    Linked_list p2 = (*L2) -> next;
    Linked_list l = (*L) = (*L1);
    Linked_list t;
    while (p1 && p2) {
        if ((p1 -> data) > (p2 -> data)) {
            l -> next = p2;
            l = p2;
            p2 = p2 -> next;
        } else if ((p1 -> data) < (p2 -> data)) {
            l -> next = p1;
            l = p1;
            p1 = p1 -> next;
        } else if ((p1 -> data) = (p2 -> data)) {
            l -> next = p1;
            l = p1;
            p1 = p1 -> next;
            t = p2;
            p2 = p2 -> next;
            free(t);
        }
    }
    free(*L2);
    l -> next = p1?p1:p2;
}

int main(void)
{
    Linked_list L, L1, L2;
    init_list(&L);
    init_list(&L1);
    init_list(&L2);

    printf("input should be in increasing order, and contain at least one repeating number\n");

    printf("number of integers to input: ");
    int in_L1 = 0;
    scanf("%d", &in_L1);
    printf("input L1:\n");
    tail_insert(&L1, in_L1);

    printf("number of integers to input: ");
    int in_L2 = 0;
    scanf("%d", &in_L2);
    printf("input L2:\n");
    tail_insert(&L2, in_L2);

    printf("-----merging-----\n");
    merge_list(&L1, &L2, &L);
    printf("result: ");
    traverse_list(L);

    return 0;
}
