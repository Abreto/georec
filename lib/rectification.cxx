/*  */
#include <rectification.hxx>
#include <correction.hxx>
#include <transformation.hxx>

void image_rectification(Mat src, Mat& dst, camera_t cam, double pitch_angle_deg, double roll_angle_deg, int order)
{
    int imgheight = src.rows, imgwidth = src.cols;
    vecp2f original(4), corrected(4);
    original[0] = Point2f(0.0, 0.0);
    original[1] = Point2f(imgwidth-1, 0);
    original[2] = Point2f(imgwidth-1, imgheight-1);
    original[3] = Point2f(0, imgheight-1);
    correction_angle(cam, original, corrected, pitch_angle_deg, roll_angle_deg, order);
    projection_trans(src, dst, original, corrected, 0); /* TODO: resample */
}

