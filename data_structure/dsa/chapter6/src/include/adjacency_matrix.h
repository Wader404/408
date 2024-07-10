#ifndef ADJACENCY_MATRIX_H_
#define ADJACENCY_MATRIX_H_

#define INFINITY 32767
#define MAX_VERTEX_NUMBER

typedef char vertex;
typedef int arc;

typedef struct {
    vertex vexs[MAX_VERTEX_NUMBER];
    arc arcs[MAX_VERTEX_NUMBER][MAX_VERTEX_NUMBER];
    int vex_num, arc_num;
}AMGraph;

void create_undirected_net(AMGraph *amg);

#endif
