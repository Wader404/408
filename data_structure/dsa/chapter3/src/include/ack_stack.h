#ifndef ACK_STACK_C_
#define ACK_STACK_C_

#define MAXSIZE 100

typedef struct {
    int m;
    int n;
}elem;

typedef struct {
    elem data[MAXSIZE];
    int top;
}Ack_stack;

void init_ack(Ack_stack *as);
void push(Ack_stack *as, elem e);
void pop(Ack_stack *as);

int is_empty(Ack_stack as);
elem get_top(Ack_stack as);


#endif
