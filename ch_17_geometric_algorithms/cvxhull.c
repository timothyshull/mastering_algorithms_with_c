#include <math.h>
#include <stdlib.h>
#include "geometry.h"

int cvxhull(const List *P, List *polygon)
{
    ListElmt *element;

    Point *min,
            *low,
            *p0,
            *pi,
            *pc;

    double z,
            length1,
            length2;

    int count;
    min = list_data(list_head(P));
    for (element = list_head(P); element != NULL; element = list_next(element)) {
        p0 = list_data(element);
        if (p0->y < min->y) {
            min = p0;
            low = list_data(element);
        } else {
            if (p0->y == min->y && p0->x < min->x) {
                min = p0;
                low = list_data(element);
            }
        }
    }
    list_init(polygon, NULL);
    p0 = low;
    do {
        if (list_ins_next(polygon, list_tail(polygon), p0) != 0) {
            list_destroy(polygon);
            return -1;
        }
        count = 0;
        for (element = list_head(P); element != NULL; element = list_next(element)) {
            if ((pi = list_data(element)) == p0) { continue; }
            count++;
            if (count == 1) {
                pc = list_data(element);
                continue;
            }
            if ((z = ((pi->x - p0->x) * (pc->y - p0->y)) - ((pi->y - p0->y) * (pc->x - p0->x))) > 0) {
                pc = pi;
            } else if (z == 0) {
                length1 = sqrt(pow(pi->x - p0->x, 2.0) + pow(pi->y - p0->y, 2.0));
                length2 = sqrt(pow(pc->x - p0->x, 2.0) + pow(pc->y - p0->y, 2.0));
                if (length1 > length2) {
                    pc = pi;
                }
            }
        }
        p0 = pc;
    } while (p0 != low);
    return 0;
}
