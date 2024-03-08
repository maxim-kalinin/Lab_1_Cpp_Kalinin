#include <QCoreApplication>
#include <iostream>


using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    float Rasstoyanie =0;
    float Vremya =0;
    float Skorost =0;

    //======================================================================================

    cout<< "Задача 1." <<endl;
    cout<< "Вычислить скорость прямолинейного движения (по расстоянию и времени)." <<endl;
    cout<< "---------------------------------------------------------------------" <<endl;

    cout<<"Введите растояние:"<<endl;
    cin>> Rasstoyanie;
    cout<<"Введите время для преодоления расстояния:"<<endl;
    cin>> Vremya;

    Skorost = Rasstoyanie/Vremya;

    cout<< "Чтобы преодолеть указанное расстояние," <<endl;
    cout<< "за указанный промежуток времени," <<endl;
    cout<< "нужно двигаться со скоростью = ";
    cout<<Skorost;
    cout<< " км/час" <<endl;
    cout<<endl<<endl;


    //=======================================================================================


    float StartSpeed =0;
    float EndSpeed =0;
    float Time =0;
    float Uskorenie =0;

    cout<< "Задача 2." <<endl;
    cout<< "Вычислить ускорение (по начальной скорости, конечной скорости и времени)." <<endl;
    cout<< "---------------------------------------------------------------------" <<endl;

    cout<<"Введите начальную скорость обьекта:"<<endl;
    cin>> StartSpeed;
    cout<<"Введите конечную скорость обьекта:"<<endl;
    cin>> EndSpeed;
    cout<<"Введите время для преодоления расстояния:"<<endl;
    cin>> Time;

    Uskorenie = (EndSpeed-StartSpeed)/Time;

    cout<< "Ускорение движения равно = ";
    cout<<Uskorenie<<endl;
    cout<<endl<<endl;


    //=======================================================================================

    float DlinnaOkrujnosy =0;
    float Radius = 0;

    cout<< "Задача 3." <<endl;
    cout<< "Вычислить радиус круга (по длине его окружности)." <<endl;
    cout<< "---------------------------------------------------------------------" <<endl;

    cout<<"Введите длинну окружности:"<<endl;
    cin>> DlinnaOkrujnosy;

    Radius = DlinnaOkrujnosy/2*3.14;

    cout<< "Радиус круга равен = ";
    cout<<Radius;
    cout<<endl<<endl;

    return a.exec();
}





















