#include <stdio.h>

#include "include/binary_linked_list.h"

int is_equal_tree(BTree bt1, BTree bt2)
{
    if (bt1 == NULL && bt2 == NULL) {
        return 1;
    } else if (bt1 == NULL || bt2 == NULL) {
        return 0;
    } 

    if (bt1 -> data != bt2 -> data) {
        return 0;
    }
    int left = is_equal_tree(bt1 -> lchild, bt2 -> lchild);
    int right = is_equal_tree(bt1 -> rchild, bt2 -> rchild);

    return left&&right;
}

//pre-order1 == pre-order2
//in-order1 == in-order2
int main(void)
{
    BTree bt1, bt2, bt3;
    printf("input node data in pre-order for binary tree 1(example:ABC##DE#G##F###): ");
    create_binary_tree(&bt1);
    printf("input node data in pre-order for binary tree 2(example:ABC##DE#G##F###): ");
    create_binary_tree(&bt2);
    printf("input node data in pre-order for binary tree 3(example:AB#CD##E##F#GH###): ");
    create_binary_tree(&bt3);

    printf("is bt1 equal to bt2? %d", is_equal_tree(bt1, bt2));
    printf("is bt1 equal to bt3? %d", is_equal_tree(bt1, bt3));

    return 0;
}
