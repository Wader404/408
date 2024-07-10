#ifndef BINARY_LINKED_LIST_C_
#define BINARY_LINKED_LIST_C_

typedef struct BTnode {
    char data;
    struct BTnode *lchild, *rchild;
}BTnode, *BTree;

// void init_binary_tree(BTree *bt);
void create_binary_tree(BTree *bt);

void pre_order_traverse(BTree bt);
void in_order_traverse(BTree bt);
int node_count(BTree bt);
// void post_order_traverse(BTree bt);


#endif
