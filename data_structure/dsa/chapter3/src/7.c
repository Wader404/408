#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 5

typedef struct {
    int *base;
    int front;
    int rear;
    int tag;
    //tag == 0, stack empty
    //tag == 1, stack full
}Seq_queue;

void init_seq_queue(Seq_queue *sq)
{
    (*sq).base = (int*)malloc(MAXSIZE * sizeof(int));
    (*sq).front = (*sq).rear = 0;
    (*sq).tag = 0;
}

bool en_queue(Seq_queue *sq, int e)
{
    if ((*sq).tag == 1) {
        return false;
    }

    (*sq).base[(*sq).rear] = e;
    (*sq).rear = (*sq).rear + 1;

    if ((*sq).front == (*sq).rear) {
        (*sq).tag = 1;
    } else {
        (*sq).tag = -1;
    }
    return true;
}

int de_queue(Seq_queue *sq)
{
    if ((*sq).tag == 0) {
        return false;
    }
    
    int e = (*sq).base[(*sq).front];
    (*sq).front = (*sq).front + 1;

    if ((*sq).front == (*sq).rear) {
        (*sq).tag = 0;
    } else {
        (*sq).tag = -1;
    }

    return e;
}

int main(void)
{
    Seq_queue sq;
    init_seq_queue(&sq);

    en_queue(&sq, 1);
    en_queue(&sq, 2);
    en_queue(&sq, 3);
    en_queue(&sq, 4);
    en_queue(&sq, 5);
    en_queue(&sq, 6);

    printf("%d\n", de_queue(&sq));
    printf("%d\n", de_queue(&sq));
    printf("%d\n", de_queue(&sq));
    printf("%d\n", de_queue(&sq));
    printf("%d\n", de_queue(&sq));
    printf("%d\n", de_queue(&sq));

    return 0;
}

