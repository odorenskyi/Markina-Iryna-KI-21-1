#include <iostream>
#include <conio.h>
#include "ModulesMarkina.h"
#include <math.h>
using namespace std;

int main(){
     system("chcp 1251 & cls");
    {
    cout<<"#TEST 9.1: "<<endl << endl;
    int n[5]={2, 4, 6, 8, 10};
    double expectedboford[5] = {4.8, 16.2, 32.4, 51.6, 73.5};
    string testResult = "Failed";
    double result = 0;
     double v1; double v2;
    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        viter(&n[i],&v1,&v2);
        result = (v1* 1000) / 1000;

        int z=(int)round(expectedboford[i]);
        int x=(int)round(result);

        if (x == z) {
            testResult = "Passed";
        }
        cout << "Test case ¹ " << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }}
    {
        cout<<endl<<"#TEST 9.2: "<<endl<<endl;
    double rozm[5]={35,36,36.5,37,38};
    double expectedroz[5] = {23,23.5,24,24.5,25};
    string  testResult = "Failed";
    double  result = 0;
    double cm;
    for (int i = 0; i < 5; i++) {
        result = roz(rozm[i]) ;

        if (result == expectedroz[i]) {
            testResult = "Passed";
        }
        cout << "Test case ¹" << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    }

{
    cout<<endl<<"#TEST 9.3: "<<endl<<endl;
    int bina[5]={1565,14000,5678,3464,9846};
    int expectedros[5] = {26,25,25,27,24};
    string  testResult = "Failed";
    int  result = 0; int vv; int res;
    for (int i = 0; i < 5; i++) {
            bin(&bina[i], &vv, &res);
        result = res;

        if (result == expectedros[i]) {
            testResult = "Passed";
        }
        cout << "Test case ¹" << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    }
    {

    double valueX[5] = { 1, 6, 5, 0.5, -12 };
    double valueY[5] = { 4, 2, 3, -4.3, -6 };
    double valueZ[5] = { 2, 2, 9, 15, 1 };

    double expectedResult[5] = {14.434, 13.119, 11.931, -17.505, -60.955 };
    string testResult = "Failed";
    double result = 0;
    cout<<endl<<"#TEST s_calculation: "<<endl<<endl;

    for (int i = 0; i < 5; i++) {
        result = floor( s_calculation(valueX[i], valueY[i], valueZ[i]) * 1000) / 1000;

        if (result == expectedResult[i]) {
            testResult = "Passed";
        }
        cout << "Test case ¹" << i + 1<< endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }
}
    getch();
    return 0;
}
