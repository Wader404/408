#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void get_intersect(Linked_list *A, Linked_list *B, Linked_list *L)
{
    Linked_list pa = (*A) -> next;
    Linked_list pb = (*B) -> next;
    Linked_list l = (*L) = (*A);
    Linked_list t;
    while (pa && pb) {
        if ((pa -> data) == (pb -> data)) {
            l -> next = pa;
            l = pa;
            pa = pa -> next;

            t = pb;
            pb = pb -> next;
            free(t);
        } else if ((pa -> data) < (pb -> data)) {
            t = pa;
            pa = pa -> next;
            free(t);
        } else if ((pa -> data) > (pb -> data)) {
            t = pb;
            pb = pb -> next;
            free(t);
        }
    }
    l -> next = NULL;
    free(*B);
}

int main(void)
{
    Linked_list A, B, L;
    init_list(&A);
    init_list(&B);
    init_list(&L);

    printf("input should be in increasing order, and contain at least one repeating number\n");

    printf("number of integers to input: ");
    int in_A = 0;
    scanf("%d", &in_A);
    printf("input A:\n");
    tail_insert(&A, in_A);

    printf("number of integers to input: ");
    int in_B = 0;
    scanf("%d", &in_B);
    printf("input B:\n");
    tail_insert(&B, in_B);

    printf("-----calculating-----\n");
    get_intersect(&A, &B, &L);
    printf("result: ");
    traverse_list(L);

    return 0;
}
