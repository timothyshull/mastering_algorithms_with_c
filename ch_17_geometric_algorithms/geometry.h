
#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "list.h"

#ifndef PI
#define            PI                    3.14159
#endif
#define            MIN(x, y)             (((x) < (y)) ? (x) : (y))
#define            MAX(x, y)             (((x) > (y)) ? (x) : (y))
#define            DEGTORAD(deg)         (((deg) * 2.0 * PI) / 360.0)
#define            RADTODEG(rad)         (((rad) * 360.0) / (2.0 * PI))

typedef struct Point_ {
    double x,
            y,
            z;
} Point;

typedef struct SPoint_ {
    double rho,
            theta,
            phi;
} SPoint;

int lint(Point p1, Point p2, Point p3, Point p4);

int cvxhull(const List *P, List *polygon);

void arclen(SPoint p1, SPoint p2, double *length);

#endif
