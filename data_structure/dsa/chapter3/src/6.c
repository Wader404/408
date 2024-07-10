#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct cir_que {
    int data;
    struct cir_que *next;
}Cque, *Cq_ptr;

typedef struct {
    Cq_ptr rear;
}Rear_ptr;


void init_cq(Rear_ptr *rp)
{
    (*rp).rear = (Cq_ptr)malloc(sizeof(Cque));
    (*rp).rear -> next = (*rp).rear;
}

int is_empty(Rear_ptr rp)
{
    if (rp.rear == rp.rear -> next) {
        return true;
    } else {
        return false;
    }
}

void traverse(Rear_ptr rp)
{
    Cq_ptr t;
    t = rp.rear -> next -> next;
    while (t != rp.rear) {
        printf("%d ", t -> data);
        t = t -> next;
    }
    printf("\n");
}

void empty(Rear_ptr *rp)
{
    Cq_ptr s;
    while (!is_empty(*rp)) {
        s = (*rp).rear -> next;
        (*rp).rear -> next = s -> next;
        free(s);
    }
}

int in_queue(Rear_ptr *rp, int x)
{
    Cq_ptr p = (Cq_ptr)malloc(sizeof(Cque));
    p -> data = x;
    p -> next = (*rp).rear -> next;
    (*rp).rear -> next = p;
    (*rp).rear = p;
    return 0;
}

int de_queue(Rear_ptr *rp)
{
    if (is_empty(*rp)) {
        return false;
    }

    int t;
    Cq_ptr p;

    p = (*rp).rear -> next -> next;
    (*rp).rear -> next -> next = p -> next;
    t = p -> data;

    if (p == (*rp).rear) {
        (*rp).rear = (*rp).rear -> next;
    }

    free(p);

    return t;
}

int main(void)
{
    Rear_ptr rp;
    init_cq(&rp);
    printf("0 represents no, 1 represents yes\n");

    printf("\ncreate a queue\n");
    printf("is the queue empty? %d\n", is_empty(rp));

    printf("\nin queue\n");
    in_queue(&rp, 1);
    in_queue(&rp, 2);
    in_queue(&rp, 3);
    in_queue(&rp, 4);
    in_queue(&rp, 5);
    traverse(rp);

    printf("\nde queue\n");
    de_queue(&rp);
    de_queue(&rp);
    traverse(rp);

    printf("\nempty the queue\n");
    empty(&rp);
    printf("is the queue empty? %d\n", is_empty(rp));

    return 0;
}
