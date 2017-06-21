/*  */
#include <utilities.hxx>

double gabsf(double x)
{
    if( x > EPSILON )
        return x;
    else if ( x < -EPSILON )
        return -x;
    else
        return 0.0;
}

int equalf(double a, double b)
{
    if( gabsf(a-b) > 0.0 )
        return 0;
    else
        return 1;
}
