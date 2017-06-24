/*  */
#include <utilities.hxx>
#include <transformation.hxx>

void projection_trans(Mat src, Mat& dst, vecp2f original, vecp2f corrected, int interp)
{
    Mat transm = getPerspectiveTransform(original, corrected);

    /* TO BE TESTED */
    warpPerspective(src, dst, transm, src.size());

    /* TODO: resample */
}
