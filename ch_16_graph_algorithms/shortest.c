#include <float.h>
#include <stdlib.h>
#include "graph.h"
#include "graphalg.h"

static void relax(PathVertex *u, PathVertex *v, double weight)
{
    if (v->d > u->d + weight) {
        v->d = u->d + weight;
        v->parent = u;
    }
    return;
}

int shortest(Graph *graph, const PathVertex *start, List *paths, int (*match)(const void *key1, const void *key2))
{
    AdjList *adjlist;

    PathVertex *pth_vertex,
            *adj_vertex;

    ListElmt *element,
            *member;

    double minimum;

    int found,
            i;
    found = 0;
    for (element = list_head(&graph_adjlists(graph)); element != NULL; element =
                                                                               list_next(element)) {
        pth_vertex = ((AdjList *) list_data(element))->vertex;
        if (match(pth_vertex, start)) {
            pth_vertex->color = white;
            pth_vertex->d = 0;
            pth_vertex->parent = NULL;
            found = 1;
        } else {
            pth_vertex->color = white;
            pth_vertex->d = DBL_MAX;
            pth_vertex->parent = NULL;
        }
    }
    if (!found) {
        return -1;
    }
    i = 0;
    while (i < graph_vcount(graph)) {
        minimum = DBL_MAX;
        for (element = list_head(&graph_adjlists(graph)); element != NULL; element = list_next(element)) {
            pth_vertex = ((AdjList *) list_data(element))->vertex;
            if (pth_vertex->color == white && pth_vertex->d < minimum) {
                minimum = pth_vertex->d;
                adjlist = list_data(element);
            }
        }

        ((PathVertex *) adjlist->vertex)->color = black;

        for (member = list_head(&adjlist->adjacent); member != NULL; member = list_next(member)) {
            adj_vertex = list_data(member);

            for (element = list_head(&graph_adjlists(graph)); element != NULL;
                 element = list_next(element)) {
                pth_vertex = ((AdjList *) list_data(element))->vertex;
                if (match(pth_vertex, adj_vertex)) {
                    relax(adjlist->vertex, pth_vertex, adj_vertex->weight);
                }
            }
        }

        i++;
    }
    list_init(paths, NULL);
    for (element = list_head(&graph_adjlists(graph)); element != NULL; element = list_next(element)) {

        pth_vertex = ((AdjList *) list_data(element))->vertex;
        if (pth_vertex->color == black) {
            if (list_ins_next(paths, list_tail(paths), pth_vertex) != 0) {
                list_destroy(paths);
                return -1;
            }
        }
    }
    return 0;
}
