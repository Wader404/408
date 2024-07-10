#include <stdio.h>
#include "linked_list.h"

void reverse_list(Linked_list *L)
{
    Linked_list p = (*L) -> next;
    Linked_list q = NULL;
    (*L) -> next = NULL;
    while (p) {
        q = p -> next;
        p -> next = (*L) -> next;
        (*L) -> next = p;
        p = q;
    }
}

int main(void)
{
    Linked_list L;
    init_list(&L);

    printf("number of integers to input: ");
    int n = 0;
    scanf("%d", &n);
    printf("input integers:\n");
    tail_insert(&L, n);

    printf("-----calculating-----\n");
    reverse_list(&L);
    printf("result: ");
    traverse_list(L);

    return 0;
}
