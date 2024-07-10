#include <stdio.h>
#include "linked_list.h"

void split_list(Linked_list *A, Linked_list *B, Linked_list *C)
{
    Linked_list pa = (*A) -> next;
    Linked_list pb = (*B);
    Linked_list pc = (*C);
    Linked_list t;
    while (pa) {
        if ((pa -> data) < 0) {
            pb -> next = pa;
            pb = pb -> next;
            pa = pa -> next;
            pb -> next = NULL;
        } else if ((pa -> data) > 0) {
            pc -> next = pa;
            pc = pc -> next;
            pa = pa -> next;
            pc -> next = NULL;
        }
    }
}

int main(void)
{
    Linked_list A, B, C;
    init_list(&A);
    init_list(&B);
    init_list(&C);
    
    printf("input should be non-zero integers\n");
    printf("number of integers to input: ");
    int in_A = 0;
    scanf("%d", &in_A);
    tail_insert(&A, in_A);

    printf("-----spliting-----\n");
    split_list(&A, &B, &C);

    printf("result:\n");
    printf("B: ");
    traverse_list(B);
    printf("C: ");
    traverse_list(C);

    return 0;
}
