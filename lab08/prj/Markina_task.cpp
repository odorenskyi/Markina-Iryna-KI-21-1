#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

string Copyright(){
    return "© Maркіна Ірина";
}
bool logvir(float a, float b){
    return (a + 5) >= b;
}
void DecHex(int x, int y, int z){
    cout << endl;
    cout << "x в десятковій: " << dec << x << " в шістнадцятковій:"<< hex << x << endl;
    cout << "y в десятковій: " << dec << y << " в шістнадцятковій: " << hex << y << endl;
    cout << "z в десятковій: " << dec << z << " в шістнадцятковій: " << hex << z << endl;
}
int main(){
    system("chcp 1251 & cls");

    int x = 0;
    int y = 0;
    int z = 0;
    float a = 0;
    float b = 0;
cout <<Copyright()<< endl;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;
    cout << "Результат логічного виразу a + 5 >= b: "
         << logvir(a, b) << endl << endl;

    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть число y: ";
    cin >> y;
    cout << "Введіть число z: ";
    cin >> z;
    DecHex(x,y,z);

    cout << endl << "Результат виразу: " << s_calculation(x, y, z);

    return 0;
}
