#ifndef SEQ_QUEUE_H_
#define SEQ_QUEUE_H_

#include <stdbool.h>

#define MAXSIZE 100

typedef struct {
    int *base;
    int front;
    int rear;
}Seq_queue;

void init_seq_queue(Seq_queue *sq);
bool in_queue(Seq_queue *sq, int e);
int de_queue(Seq_queue *sq);

void traverse(Seq_queue sq);
int get_length(Seq_queue sq);
bool is_full(Seq_queue sq);
bool is_empty(Seq_queue sq);

#endif
