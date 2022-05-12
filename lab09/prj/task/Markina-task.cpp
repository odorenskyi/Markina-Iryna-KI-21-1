#include <iostream>
#include "ModulesMarkina.h"
using namespace std;

int main()
{
    int rez;
    system("chcp 1251 & cls");
    chek3:
    cout<<"Введіть 7 щоб визвати функцію s_calculation"<< endl <<"Введіть 5 для викликання задачі 9.1" << endl << "Введіть 4 для викликання задачі 9.2"<< endl;
    cout<< "Введіть 3 для викликання задачі 9.3" <<endl <<"Введіть 9 або 0 для виходу з програми"<<endl;
    cout<<"Ваш вибір: ";
    cin >> rez;
    if (rez==7){
    double x, y, z;
    cout <<"Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;
    cout <<"Введіть z: ";
    cin >> z;
    cout <<"Результат: "<< s_calculation(x,y,z)<< endl;
    goto chek3;}

    if (rez==5){
    int n;
    double v1=0.0, v2=0.0;
    chek:
    cout <<endl<< "Бал Бофорда:";
    cin >> n;
    if (n<0 || n>12){
    cout << "Помилка!!! Введіть число в діапазоні від 0 до 12" << endl<< endl;
    goto chek;}
    viter( &n, &v1,&v2);
    cout << "Сила вітру: " << n << " за балом Бофорда" << endl;
    cout<< "Швидкість вітру: " << v1 << " - " << v2 <<" км/год"<<endl << endl;
    goto chek3;}

    if (rez==4){
    double cm=0.0;
    chek1:
    cout <<endl<<"Розмір взуття в системі України: ";
    cin >> cm;
    if (cm<35 || cm>48.5){
    cout << "Помилка!!! Введіть число в діапазоні від 35 до 48.5" << endl<< endl;
          goto chek1;}
    cout << roz(cm) <<" сантиметрів" << endl<< endl;
    goto chek3;}

    if (rez==3){
    int nb, vv, res;
    chek2:
    cout <<endl<<"Введіть число: ";
    cin >> nb;
    if (nb<1000 || nb>10000){
        cout << "Помилка!!! Введіть число в діапазоні від 1000 до 10000" << endl<< endl;
        goto chek2;}
    bin(&nb,&vv,&res);
    if (vv==1){cout<<"Кількість двійкових одиниць: "<<res<<endl<<endl;}
    if (vv==2){cout<<"Кількість двійкових нулів: "<<res<<endl<<endl;}
    goto chek3;}
    if (rez==9 || rez==0){exit(0);}
    else {cout<<"\a";
        goto chek3;}
}
