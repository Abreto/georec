/*  */

#ifndef LIBGEOREC_TRANSFORMATION_HXX
#define LIBGEOREC_TRANSFORMATION_HXX

#include <opencv2/opencv.hpp>

void projection_trans(Mat src, Mat& dst, vecp2f original, vecp2f corrected, int interp);

#endif
