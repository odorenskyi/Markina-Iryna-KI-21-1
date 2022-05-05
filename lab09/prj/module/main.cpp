#ifndef ModulesMarkina.h
#include <math.h>
#include <bitset>
#define ModulesMarkina.h
#define _USE_MATH_DEFINES

using namespace std;
void viter(int *n,double *v1,double *v2)
{
    switch (*n){
    case 0:{*v1=0.3;
    break;}
    case 1:{*v1=0.3; *v2=1.5;
    break;}
    case 2:{*v1=1.6; *v2=9.4;
    break;}
    case 3:{*v1=9.4; *v2=5.4;
    break;}
    case 4:{*v1=5.4; *v2=7.9;
    break;}
    case 5:{*v1=8.0; *v2=10.7;
    break;}
    case 6:{*v1=10.8; *v2=13.8;
    break;}
    case 7:{*v1=13.9; *v2=17.1;
    break;}
    case 8:{*v1=17.2; *v2=20.7;
    break;}
    case 9:{*v1=20.8; *v2=24.4;
    break;}
    case 10:{*v1=24.5; *v2=28.4;
    break;}
    case 11:{*v1=28.5; *v2=32.6;
    break;}
    case 12:{*v1=32.7;
    break;}
}
    *v1=*v1*3,6;
    *v2=*v2*3,6;
}

double roz(double cm)
{
    if (cm==36.5){cm=24;}
    if (cm==38.5) {cm=25.5;}
    if (cm==40.5) {cm=26;}
    if (cm==41.5) {cm=27;}
    if (cm==42.5) {cm=28;}
    if (cm==47.5){cm=31;}
    if (cm==48.5) {cm=32;}

    int y=(int)round(cm);
    switch (y){
    case 35:{cm=23;
    break;}
    case 36:{cm=23.5;
    break;}
    case 37:{cm=24.5;
    break;}
    case 38:{cm=25;
    break;}
    case 41:{cm=26.5;
    break;}
    case 42:{cm=27.5;
    break;}
    case 43:{cm=28.5;
    break;}
    case 44:{cm=29;
    break;}
    case 45:{cm=29.5;
    break;}
    case 46:{cm=30;
    break;}
    case 47:{cm=30.5;
    break;}
    case 48:{cm=31.5;
    break;}
    }
    return cm;
}


int bin(int *nb,int *vv,int *res)
{
    bitset<32> b_n(*nb);
    if(b_n[15]){
         *res= b_n.count();*vv=1;
    }
    else {
         *res= 32 - b_n.count();*vv=2;
    }
return 0;
}

double s_calculation(double x, double y, double z){
    int h=pow(z, 2);
    double m;
    m=0,5*y;
    int s=h*m;
    return (sqrt(fabs(s))+(M_PI*x+pow(M_E,abs(y)))/y);
}
#endif
