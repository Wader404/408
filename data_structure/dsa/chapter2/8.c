#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void del_in_range(Linked_list *L, int min, int max)
{
    Linked_list p = (*L) -> next;
    Linked_list q = (*L);
    while (p) {
        if ((p -> data) > min && (p -> data) < max) {
            q -> next = p -> next;
            free(p);
            p = q -> next;
        } else {
            p = p -> next;
            q = q -> next;
        }
    }
}

int main(void)
{
    int min, max, n;
    min = max = n = 0;
    Linked_list L;
    init_list(&L);

    printf("please input min and max:\n");
    scanf("%d %d", &min, &max);
    printf("number of integers to input: ");
    scanf("%d", &n);
    printf("input integers:\n");
    tail_insert(&L, n);

    printf("-----calculating-----\n");
    del_in_range(&L, min, max);
    traverse_list(L);

    return 0;
}
