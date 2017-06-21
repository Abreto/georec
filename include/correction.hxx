/*  */
#ifndef LIBGEOREC_CORRECTION_HXX
#define LIBGEOREC_CORRECTION_HXX

#include <opencv2/core.hpp>

using namespace cv;

void correction_pitch(Point2f src, Point2f& dst, double pitch_angle_deg);

#endif
