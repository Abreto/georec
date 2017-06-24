/*  */
#ifndef LIBGEOREC_RECTIFICATION_HXX
#define LIBGEOREC_RECTIFICATION_HXX

#include <utilities.hxx>
#include <correction.hxx>

void image_rectification(Mat src, Mat& dst, camera_t cam, double pitch_angle_deg, double roll_angle_deg, int order);

#endif
