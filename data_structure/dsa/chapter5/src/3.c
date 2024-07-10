#include <stdio.h>
#include <stdlib.h>

#include "include/binary_linked_list.h"

void reverse_child(BTree *bt)
{
    BTree p = (BTree)malloc(sizeof(BTnode));

    if ((*bt) -> lchild == NULL && (*bt) -> rchild == NULL) {
        return;
    }

    p = (*bt) -> rchild;
    (*bt) -> rchild = (*bt) -> lchild;
    (*bt) -> lchild = p;
    reverse_child(&((*bt) -> lchild));
    reverse_child(&((*bt) -> rchild));
}

int main(void)
{
    BTree bt;

    printf("input node data in pre-order(example:ABC##DE#G##F###): ");
    create_binary_tree(&bt);
    //cannot create fully

    printf("pre-order traverse: ");
    pre_order_traverse(bt);

    reverse_child(&bt);

    printf("\n\n-----after reversing child node-----\n");
    printf("pre-order traverse: ");
    pre_order_traverse(bt);

    return 0;
}
