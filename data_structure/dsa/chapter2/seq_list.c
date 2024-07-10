#include <stdio.h>

#include "seq_list.h"

// typedef struct seq_list {
//     int data[MAXSIZE];
//     int length;
// }Seq_list;

void init_list(Seq_list *L)
{
    L -> length = 0;
    for (int i = 0; i < MAXSIZE; i++) {
        L -> data[i] = 0;
    }
}

void insert_list(Seq_list *L, int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%d", &(L -> data[i]));
    }
    L -> length = n;
}

void traverse_list(Seq_list L)
{
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
}
