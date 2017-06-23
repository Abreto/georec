/*  */
#ifndef LIBGEOREC_CORRECTION_HXX
#define LIBGEOREC_CORRECTION_HXX

#include <utilities.hxx>
#include <opencv2/core.hpp>

using namespace cv;

void correction_pitch(camera_t cam, Point2f src, Point2f& dst, double pitch_angle_deg);

#endif
