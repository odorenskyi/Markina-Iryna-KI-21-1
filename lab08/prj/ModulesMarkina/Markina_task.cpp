#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

string Copyright(){
    return "© ћарк≥на ≤рина";
}
bool logvir(float a, float b){
    return (a+5) >= b;
}
void DecHex(int x, int y, int z){
    cout << endl;
    cout << "x в дес€тков≥й: " << dec << x <<"  в ш≥стнадц€тков≥й:"<< hex << x << endl;
    cout << "y в дес€тков≥й: " << dec << y << " в ш≥стнадц€тков≥й: " << hex << y << endl;
    cout << "z в дес€тков≥й: " << dec << z << " в ш≥стнадц€тков≥й: " << hex << z << endl;
}
int main(){
    system("chcp 1251 & cls");

    int x = 0;
    int y = 0;
    int z = 0;
    float a = 0;
    float b = 0;
cout <<Copyright()<< endl;

    cout << "¬вед≥ть зм≥нну a: ";
    cin >> a;
    cout << "¬вед≥ть зм≥нну b: ";
    cin >> b;
    cout << "–езультат лог≥чного виразу a+5 >= b: "
         << logvir(a, b) << endl << endl;

    cout << "¬вед≥ть зм≥нну x: ";
    cin >> x;
    cout << "¬вед≥ть зм≥нну y: ";
    cin >> y;
    cout << "¬вед≥ть зм≥нну z: ";
    cin >> z;
    DecHex(x,y,z);

    cout << endl << "–езультат виразу: " << s_calculation(x, y, z);
    cin >> x;
    return 0;
}
