#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "seq_queue.h"

//typedef struct {
//    int *base;
//    int front;
//    int rear;
//}Seq_queue;

void init_seq_queue(Seq_queue *sq)
{
    (*sq).base = (int*)malloc(MAXSIZE * sizeof(int));
    (*sq).front = (*sq).rear = 0;
}

bool in_queue(Seq_queue *sq, int e)
{
    if (is_full(*sq)) {
        return false;
    }

    (*sq).base[(*sq).rear] = e;
    (*sq).rear = ((*sq).rear + 1) % MAXSIZE;

    return true;
}

int de_queue(Seq_queue *sq)
{
    if (is_empty(*sq)) {
        return false;
    }
    
    int e = (*sq).base[(*sq).front];
    (*sq).front = ((*sq).front + 1) % MAXSIZE;
    return e;
}
    


void traverse(Seq_queue sq)
{
    for (int i = sq.front; i < sq.rear; i++) {
        printf("%d ", sq.base[i]);
    }
    printf("\n");
}

int get_length(Seq_queue sq)
{
    return (sq.rear - sq.front + MAXSIZE) % MAXSIZE;
}

bool is_full(Seq_queue sq)
{
    if ((sq.rear + 1) % MAXSIZE == sq.front) {
        return true;
    } else {
        return false;
    }
}

bool is_empty(Seq_queue sq)
{
    if(sq.front == sq.rear) {
        return true;
    } else {
        return false;
    }
}

