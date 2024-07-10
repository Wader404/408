#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void get_minus(Linked_list *A, Linked_list *B)
{
    Linked_list pa = (*A) -> next;
    Linked_list pb = (*B) -> next;
    Linked_list t = (*A);
    while (pa &&pb) {
        if ((pa -> data) == (pb -> data)) {
            t -> next = pa -> next;
            free(pa);
            pa = t -> next;
            pb = pb -> next;
        } else if ((pa -> data) < (pb -> data)) {
            pa = pa ->next;
            t = t -> next;
        } else if ((pa -> data) > (pb -> data)) {
            pb = pb -> next;
        }
    }
}

int main(void)
{
    Linked_list A, B;
    init_list(&A);
    init_list(&B);

    printf("input should be in increasing order\n");

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
    get_minus(&A, &B);
    printf("result: ");
    traverse_list(A);
    int length = get_length(A);
    printf("number of elements:%d", length);

    return 0;
}
