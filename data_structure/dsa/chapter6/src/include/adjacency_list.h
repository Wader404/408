#ifndef ADJACENCY_LIST_H_
#define ADJACENCY_LIST_H_

#define MAX_VERTEX_NUMBER 100

typedef struct ANode {
    int adj_vex;
    struct ANode * next_arc;
}ANode;

typedef struct VNode {
    int data;
    ANode * first_arc;
}VNode, AList[MAX_VERTEX_NUMBER];

typedef struct {
    AList vertices;
    int vex_num, arc_num;
}

#endif
