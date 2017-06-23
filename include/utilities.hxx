/*  */
#ifndef LIBGEOREC_UTILITIES_H
#define LIBGEOREC_UTILITIES_H

#include <cmath>

using namespace std;

#define EPSILON (1e-8)
#define PI      (acos(-1.0))

struct camera_t
{
    double focus;
    double x, y;
};

int equalf(double a, double b);

#endif
