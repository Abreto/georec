/*  */
#include <rectification.hxx>

int main(void)
{
    Mat img = imread("tst.jpg");
    Mat proccessed;
    camera_t cam = {3805.6398, 1701.2570, 1142.9699};
    image_rectification(img, proccessed, cam, 1.2, 1017.466, FIRST_PITCH | THEN_ROLL);
    imwrite("tsted.jpg", proccessed);
    return 0;
}
