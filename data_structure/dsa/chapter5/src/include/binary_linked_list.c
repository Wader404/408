#include <stdio.h>
#include <stdlib.h>


#include "binary_linked_list.h"

// typedef struct BTnode {
//     char data;
//     struct BTnode *lchild, *rchild;
// }BTnode, *BTree;

// void init_binary_tree(BTree *bt)
// {
//     (*bt) = (BTree)malloc(sizeof(BTnode));
//     (*bt) -> lchild = (*bt) -> rchild = NULL;
//     (*bt) -> data = '\0';
// }

// create a binary tree in pre-order
void create_binary_tree(BTree *bt)
{
    char a;
    scanf("%c", &a);
    //a = getchar();

    if (a == '#') {
        *bt = NULL;
    } else {
        (*bt) = (BTree)malloc(sizeof(BTnode));
        (*bt) -> data = a;
        create_binary_tree(&((*bt) -> lchild));
        create_binary_tree(&((*bt) -> rchild));
    }
}






// functions don't change binary tree

void pre_order_traverse(BTree bt)
{
    if(bt) {
        printf("%c", bt -> data);
        pre_order_traverse(bt -> lchild);
        pre_order_traverse(bt -> rchild);
    }
}

void in_order_traverse(BTree bt)
{
    if(bt) {
        in_order_traverse(bt -> lchild);
        printf("%d", bt -> data);
        in_order_traverse(bt -> rchild);
    }
}

int node_count(BTree bt)
{
    if (bt == NULL) {
        return 0;
    } else {
        return node_count(bt -> lchild) + node_count(bt -> rchild) + 1;
    }
}

// void post_order_traverse(BTree bt)
// {
//     if(bt) {
//         post_order_traverse(bt -> lchild);
//         post_order_traverse(bt -> rchild);
//         printf("%d", bt -> data);
//     }
// }

