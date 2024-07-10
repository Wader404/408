#include <stdio.h>
#include <stdlib.h>

typedef struct DLnode {
    int data;
    struct DLnode *prior;
    struct DLnode *next;
}DLnode, *DLinked_list;

void init_double_circu_list(DLinked_list *L)
{
    (*L) = (DLinked_list)malloc(sizeof(DLnode));
    (*L) -> data = 0;
    (*L) -> prior = NULL;
    (*L) -> next = NULL;
}

void tail_insert(DLinked_list *L, int n)
{
    DLinked_list p, r;
    r = (*L);

    for (int i = 0; i < n; i++) {
        p = (DLinked_list)malloc(sizeof(DLnode));
        scanf("%d", &(p -> data));
        p -> next = (*L);
        r -> next = p;
        p -> prior = r;
        (*L) -> prior = p;
        r = p;
    }
}

void traverse_list(DLinked_list L)
{
    DLinked_list p = L -> next;
    while (p != L) {
        printf("%d ", p -> data);
        p = p -> next;
    }
}


void Exchange(DLinked_list *p)
{
    DLinked_list q = (*p) -> prior;
    q -> prior -> next = (*p);
    (*p) -> prior = q -> prior;
    q -> next = (*p) -> next;
    (*p) -> next = q;
    q -> prior = (*p);
}

int main(void)
{
    DLinked_list L;
    DLinked_list p = NULL;
    init_double_circu_list(&L);
    int n = 0;

    printf("the number of integers to input(at least 3): ");
    scanf("%d", &n);
    printf("input integers:\n");
    tail_insert(&L, n);
    p = L ->next ->next -> next;

    printf("the original list: ");
    traverse_list(L);
    printf("\np points to: %d\n", p -> data);

    printf("-----calculating-----\n");
    Exchange(&p);
    printf("result: ");
    traverse_list(L);

    return 0;
}
