#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

int main()
{
    int rez;
    system("chcp 1251 & cls");
    chek3:
    cout<<"������ 7 ��� ������� ������� s_calculation"<< endl <<"������ 5 ��� ���������� ������ 9.1" << endl << "������ 4 ��� ���������� ������ 9.2"<< endl;
    cout<< "������ 3 ��� ���������� ������ 9.3" <<endl <<"������ 9 ��� 0 ��� ������ � ��������"<<endl;
    cout<<"��� ����: ";
    cin >> rez;
    if (rez==7){
    double x, y, z;
    cout <<"������ x: ";
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout <<"������ z: ";
    cin >> z;
    cout <<"���������: "<< s_calculation(x,y,z)<< endl;
    goto chek3;}

    if (rez==5){
    int n;
    double v1=0.0, v2=0.0;
    chek:
    cout <<endl<< "��� �������:";
    cin >> n;
    if (n<0 || n>12){
    cout << "�������!!! ������ ����� � ������� �� 0 �� 12" << endl<< endl;
    goto chek;}
    viter( &n, &v1,&v2);
    cout << "���� ����: " << n << " �� ����� �������" << endl;
    cout<< "�������� ����: " << v1 << " - " << v2 <<" ��/���"<<endl << endl;
    goto chek3;}

    if (rez==4){
    double cm=0.0;
    chek1:
    cout <<endl<<"����� ������ � ������ ������: ";
    cin >> cm;
    if (cm<35 || cm>48.5){
    cout << "�������!!! ������ ����� � ������� �� 35 �� 48.5" << endl<< endl;
          goto chek1;}
    cout << roz(cm) <<" ����������" << endl<< endl;
    goto chek3;}

    if (rez==3){
    int nb, vv, res;
    chek2:
    cout <<endl<<"������ �����: ";
    cin >> nb;
    if (nb<1000 || nb>10000){
        cout << "�������!!! ������ ����� � ������� �� 1000 �� 10000" << endl<< endl;
        goto chek2;}
    bin(&nb,&vv,&res);
    if (vv==1){cout<<"ʳ������ �������� �������: "<<res<<endl<<endl;}
    if (vv==2){cout<<"ʳ������ �������� ����: "<<res<<endl<<endl;}
    goto chek3;}
    if (rez==9 || rez==0){exit(0);}
    else {cout<<"\a";
        goto chek3;}
}
