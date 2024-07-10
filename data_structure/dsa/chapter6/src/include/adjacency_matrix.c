#include <stdio.h>

#include "adjacency_matrix.h"

void create_undirected_net(AMGraph *amg)
{
    printf("input vertex number and arc number: ");
    scanf("%d %d", &(*amg).vex_num, &(*amg).arc_num);

    printf("input information of vertices in order: ");
    for (int i = 0; i < (*amg).vex_num; i++) {
        scanf("%d", &(*amg).vexs[i]);
    }

    for (int i = 0; i < (*amg).vex_num; i++) {
        for (int j = 0; j < (*amg).vex_num; j++) {
            (*amg).arcs[i][j] = INFINITY;
        }
    }

    for (int i = 0; i < (*amg).arc_num; i++) {
