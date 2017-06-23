/*  */
#include <correction.hxx>


void correction_pitch(camera_t cam, Point2f src, Point2f& dst, double pitch_angle_deg)
{
    if( equalf(pitch_angle_deg, 0.0) )
    {
        dst.x = src.x;
        dst.y = src.y; /* in case copy by ref */
    } else {
        double pitch_angle_rad = (pitch_angle_deg / 180.0) * PI;
        double pitch_angle_sec = 1.0 / cos(pitch_angle_rad); /* secx = 1/cosx */
        double dx = src.x - cam.x, dy = src.y - cam.y;
        double L = dy / cam.focus;
        double spread_angle = atan(L);
        double kx = cos(spread_angle) / cos(spread_angle - pitch_angle_rad);
        double ky = pitch_angle_sec * kx;

        dst.x = kx * dx + cam.x;
        dst.y = ky * dy + cam.y;
    }
}

void correction_pitch(camera_t cam, vecp2f src, vecp2f& dst, double pitch_angle_deg)
{
    int i = 0, n = src.size();
    for(i = 0;i < n;++i)
        correction_pitch(cam, src[i], dst[i], pitch_angle_deg);
}

void correction_roll(camera_t cam, Point2f src, Point2f& dst, double roll_angle_deg)
{
    if( equalf(roll_angle_deg, 0.0) )
    {
        dst.x = src.x;
        dst.y = src.y;
    } else {
        double roll_angle_rad = (roll_angle_deg / 180.0) * PI;
        double roll_angle_sec = 1.0 / cos(roll_angle_rad);
        double dx = src.x - cam.x, dy = src.y - cam.y;
        double L = dx / cam.focus;
        double spread_angle = atan(L);
        double ky = cos(spread_angle) / cos(spread_angle - roll_angle_rad);
        double kx = roll_angle_sec * ky;

        dst.x = kx * dx + cam.x;
        dst.y = ky * dy + cam.y;
    }
}

void correction_roll(camera_t cam, vecp2f src, vecp2f& dst, double roll_angle_deg)
{
    int i = 0, n = src.size();
    for(i = 0;i < n;++i)
        correction_roll(cam, src[i], dst[i], roll_angle_deg);
}
