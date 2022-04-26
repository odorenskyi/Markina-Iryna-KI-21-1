#ifndef ModulesMarkina.h
#define ModulesMarkina.h
#define _USE_MATH_DEFINES
#include <cmath>
double s_calculation(double x, double y, double z){
    int h=pow(z, 2);
    double m;
    m=0,5*y;
    int s=h*m;
    return (sqrt(fabs(s))+(M_PI*x+pow(M_E,abs(y)))/y);
}

#endif
