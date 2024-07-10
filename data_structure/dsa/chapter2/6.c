#include <stdio.h>
#include "linked_list.h"

int find_max(Linked_list L, int n)
{
    Linked_list p = L -> next;
    Linked_list max = p;
    for (int i = 0; i < n; i++) {
        if ((p -> data) <= (max -> data)) {
            p = p -> next;
        } else if ((p -> data) > (max -> data)) {
            max = p;
            p = p -> next;
        }
    }
    return (max -> data);
}

int main(void)
{
    Linked_list L;
    init_list(&L);

    printf("number of integers to input: ");
    int n = 0;
    scanf("%d", &n);
    tail_insert(&L, n);

    printf("-----calculating-----\n");
    printf("the biggest element is: %d\n", find_max(L, n));

    return 0;
}
