#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

string Copyright(){
    return "� ������ �����";
}
bool logvir(float a, float b){
    return (a+5) >= b;
}
void DecHex(int x, int y, int z){
    cout << endl;
    cout << "x � ���������: " << dec << x <<"  � ��������������:"<< hex << x << endl;
    cout << "y � ���������: " << dec << y << " � ��������������: " << hex << y << endl;
    cout << "z � ���������: " << dec << z << " � ��������������: " << hex << z << endl;
}
int main(){
    system("chcp 1251 & cls");

    int x = 0;
    int y = 0;
    int z = 0;
    float a = 0;
    float b = 0;
cout <<Copyright()<< endl;

    cout << "������ ����� a: ";
    cin >> a;
    cout << "������ ����� b: ";
    cin >> b;
    cout << "��������� �������� ������ a+5 >= b: "
         << logvir(a, b) << endl << endl;

    cout << "������ ����� x: ";
    cin >> x;
    cout << "������ ����� y: ";
    cin >> y;
    cout << "������ ����� z: ";
    cin >> z;
    DecHex(x,y,z);

    cout << endl << "��������� ������: " << s_calculation(x, y, z);
    cin >> x;
    return 0;
}
