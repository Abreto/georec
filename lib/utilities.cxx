/*  */
#include <utilities.hxx>


int equalf(double a, double b)
{
    if( fabs(a-b) > EPSILON )
        return 0;
    else
        return 1;
}
