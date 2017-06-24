/*  */
#ifndef LIBGEOREC_CORRECTION_HXX
#define LIBGEOREC_CORRECTION_HXX

#include <utilities.hxx>

void correction_pitch(camera_t cam, Point2f src, Point2f& dst, double pitch_angle_deg);
void correction_pitch(camera_t cam, vecp2f src, vecp2f& dst, double pitch_angle_deg);

void correction_roll(camera_t cam, Point2f src, Point2f& dst, double roll_angle_deg);
void correction_roll(camera_t cam, vecp2f src, vecp2f& dst, double roll_angle_deg);

#define FIRST_PITCH  0x01
#define FIRST_ROLL   0x00
#define THEN_PITCH   0x02
#define THEN_ROLL    0x00

void correction_angle(
    camera_t cam,
    vecp2f src, vecp2f& dst,
    double pitch_angle_deg, double roll_angle_deg,
    int order
);
/* usage: co.._an..(.., FIRST_PITCH | THEN_ROLL) and so on. */

#endif
