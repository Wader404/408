#include <stdio.h>

#include "include/binary_linked_list.h"

void double_traverse(BTree bt)
{
    if (bt -> lchild == NULL && bt -> rchild == NULL) {
        return;
    }
    printf("%c", bt -> data);
    double_traverse(bt -> lchild);
    printf("%c", bt -> data);
    double_traverse(bt -> rchild);
}

int main(void)
{
    BTree bt;

    printf("input node data in pre-order(example:ABC##DE#G##F###): ");
    create_binary_tree(&bt);

    double_traverse(bt);

    return 0;
}
