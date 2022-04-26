#include <iostream>
#include <conio.h>
#include "ModulesMarkina.h"

using namespace std;

int main(){
    double valueX[5] = { 7, 3, 90, 0, 1 };
    double valueY[5] = { 3, 2, 6, 1, 8 };
    double valueZ[5] = { 8, 1, 3, 14, 6 };

    double expectedResult[5] = { 14.025, 8.406, 114.362, 2.718, 373.012 };
    string testResult = "Failed";
    double result = 0;

    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        result = floor( s_calculation(valueX[i], valueY[i], valueZ[i]) * 1000) / 1000;

        if (result == expectedResult[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << ": " << endl;
        cout << "X = " << valueX[i] << endl;
        cout << "Y = " << valueY[i] << endl;
        cout << "Z = " << valueZ[i] << endl;
        cout << "Expected result: " << expectedResult[i] << endl;
        cout << "The result obtained: " << result << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }
    getch();
    return 0;
}
