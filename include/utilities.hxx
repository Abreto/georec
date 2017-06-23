/*  */
#ifndef LIBGEOREC_UTILITIES_H
#define LIBGEOREC_UTILITIES_H

#include <cmath>
#include <vector>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

#define EPSILON (1e-8)
#define PI      (acos(-1.0))

typedef vector<Point2f> vecp2f;

struct camera_t
{
    double focus;
    double x, y;
};

int equalf(double a, double b);

#endif
