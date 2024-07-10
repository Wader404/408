#ifndef SEQ_LIST_H
#define SEQ_LIST_H

#define MAXSIZE 100

typedef struct seq_list {
    int data[MAXSIZE];
    int length;
}Seq_list;

void init_list(Seq_list *L);
void insert_list(Seq_list *L, int n);
void traverse_list(Seq_list L);


#endif
