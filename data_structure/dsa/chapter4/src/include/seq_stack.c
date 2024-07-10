#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "seq_stack.h"

// typedef struct {
//     int *base;
//     int *top;
//     int stacksize;
// }Seq_stack;

void init_seq_stack(Seq_stack *ss)
{
    ss -> base = (int*)malloc(MAXSIZE*sizeof(int));
    ss -> top = ss -> base;
    ss -> stacksize = MAXSIZE;
}

bool push_seq_stack(Seq_stack *ss, int e)
{
    if (is_full(*ss)) {
        return false;
    }

    *(ss -> top)++ = e;
    return true;
}

int pop_seq_stack(Seq_stack *ss)
{
    if (is_empty(*ss)) {
        return false;
    }
    return *(--ss -> top);
}






void traverse_seq_stack(Seq_stack ss)
{

}

bool is_empty(Seq_stack ss)
{
    if ((ss.top) == (ss.base)) {
        return true;
    } else {
        return false;
    }
}

bool is_full(Seq_stack ss)
{
    if ((ss.top) - (ss.base) == ss.stacksize) {
        return true;
    } else {
        return false;
    }
}
