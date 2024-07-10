#include <stdio.h>

#include "include/binary_linked_list.h"

int leaf_count(BTree bt)
{
    if (bt == NULL) {
        return 0;
    }

    if (bt -> lchild == NULL && bt -> rchild == NULL) {
        return 1;
    } else {
        return leaf_count(bt -> lchild) + leaf_count(bt -> rchild);
    }

}

int main(void)
{
    BTree bt;

    printf("input node data in pre-order(example:ABC##DE#G##F###): ");
    create_binary_tree(&bt);

    printf("pre-order traverse: ");
    pre_order_traverse(bt);

    int leaf_sum = leaf_count(bt);

    printf("\nnumber of leaves: %d", leaf_sum);

    return 0;
}
