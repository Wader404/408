#include <stdio.h>
#include <stdbool.h>

#include "include/seq_queue.h"

// the definition below is in include/seq_queue.h
// typedef struct {
//     int *base;
//     int front;
//     int rear;
// }Seq_queue;

bool head_in_queue(Seq_queue *sq, int e)
{
    if (((*sq).front - 1 + MAXSIZE) % MAXSIZE == (*sq).rear) {
        return false;
    } else {
        (*sq).front = ((*sq).front -1 + MAXSIZE) % MAXSIZE;
        (*sq).base[(*sq).front] = e;
        return true;
    }
}

int tail_de_queue(Seq_queue *sq)
{
    if ((*sq).front == (*sq).rear) {
        return false;
    } else {
        int e = (*sq).base[(*sq).rear];
        (*sq).rear = ((*sq).rear - 1 + MAXSIZE) % MAXSIZE;
        return e;
    }
}

int main(void)
{
    Seq_queue sq;
    init_seq_queue(&sq);

    in_queue(&sq, 1);
    in_queue(&sq, 2);
    in_queue(&sq, 3);
    in_queue(&sq, 4);
    in_queue(&sq, 5);
    printf("normal in_queue");
    traverse(sq);

    de_queue(&sq);
    de_queue(&sq);
    printf("normal de_queue");
    traverse(sq);

    head_in_queue(&sq, 6);
    head_in_queue(&sq, 7);
    printf("head_in_queue");
    traverse(sq);

    tail_de_queue(&sq);
    tail_de_queue(&sq);
    printf("tail_de_queue");
    traverse(sq);

    return 0;
}
