#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

string Copyright(){
    return "© Маркіна Ірина";
}
bool logvir(float a, float b){
    return (a+5) >= b;
}
void DecHex(int x, int y, int z){
    cout << endl;
    cout << "x в десятковій: " << dec << x <<"  в шістнадцятковій:"<< hex << x << endl;
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

    cout << "Введіть змінну a: ";
    cin >> a;
    cout << "Введіть змінну b: ";
    cin >> b;
    cout << "Результат логічного виразу a+5 >= b: "
         << logvir(a, b) << endl << endl;

    cout << "Введіть змінну x: ";
    cin >> x;
    cout << "Введіть змінну y: ";
    cin >> y;
    cout << "Введіть змінну z: ";
    cin >> z;
    DecHex(x,y,z);

    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    cin >> x;
    return 0;
}
