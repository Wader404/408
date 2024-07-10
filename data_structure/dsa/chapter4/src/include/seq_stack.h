#ifndef SEQ_STACK_H_
#define SEQ_STACK_H_

#include <stdbool.h>

#define MAXSIZE 100

typedef struct {
    int *base;
    int *top;
    int stacksize;
}Seq_stack;

void init_seq_stack(Seq_stack *ss);
bool push_seq_stack(Seq_stack *ss, int e);
int pop_seq_stack(Seq_stack *ss);

bool is_empty(Seq_stack ss);
bool is_full(Seq_stack ss);


#endif
