#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "include/linked_list.h"

int get_max(Linked_list p)
{
    if (p -> next) {
        int max = p -> data;
        return (max > get_max(p -> next) ? max:get_max(p -> next));
    } else {
        return p -> data;
    }

}

int get_node_num(Linked_list p)
{
    if (p -> next) {
        return 1 + get_node_num(p -> next);
    } else {
        return 1;
    }
}

float get_average(Linked_list p, int num)
{
    if (p -> next) {
        float average = get_average(p -> next, num - 1);
        return (average * (num - 1) + p -> data)/num;
    } else {
        return p -> data;
    }
}

int main(void)
{
    Linked_list L;
    init_list(&L);

    printf("number of integers to input: ");
    int in = 0;
    scanf("%d", &in);
    printf("input numbers(seperated by space):\n");
    tail_insert(&L, in);

    Linked_list p = (Linked_list)malloc(sizeof(Lnode));
    p = L -> next;
    int num = get_length(L);

    printf("maximum: %d\n", get_max(p));
    printf("number of nodes(excluding head node): %d\n", get_node_num(p));
    printf("average: %f\n", get_average(p, num));

    return 0;
}
