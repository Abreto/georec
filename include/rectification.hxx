/*  */
#ifndef LIBGEOREC_RECTIFICATION_HXX
#define LIBGEOREC_RECTIFICATION_HXX

#include <utilities.hxx>

void image_rectification(Mat src, Mat& dst, double pitch_angle_deg, double roll_angle_deg, camera_t cam);

#endif
