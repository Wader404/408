#include <stdio.h>
#include "seq_list.h"

void del_particular_elem(Seq_list *L, int item)
{
    int t = 0;
    for (int i = 0; i < (*L).length; i++) {
        if ((*L).data[i] != item) {
            (*L).data[t] = (*L).data[i];
            t++;
        }
    }
    (*L).length = t;
}

int main(void)
{
    Seq_list A;
    init_list(&A);
    int n= 0;
    int item = 0;

    printf("input number of integers to input(should be less than 100): ");
    scanf("%d", &n);
    printf("input numbers:\n");
    insert_list(&A, n);

    printf("input the element you want to delete: ");
    scanf("%d", &item);
    printf("-----calculating-----\n");
    del_particular_elem(&A, item);

    printf("result: ");
    traverse_list(A);

    return 0;
}
