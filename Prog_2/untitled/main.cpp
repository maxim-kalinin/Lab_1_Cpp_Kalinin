/*
 * Номер группы 315, факультет ООП на языке С++
 * Разработчики программы 1. Калинин Максим
 * Номер Лабораторной работы -1 программа -2
 */


#include <QCoreApplication>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout.setf(ios::right);
    cout.width(10);
    cout<<"*****";
    std::cout.width(30);
    std::cout<<"ТУСУР";
    std::cout.width(30);
    std::cout<<"*****"<<std::endl;
    std::cout<<std::endl;

    cout.setf(ios::right);
    cout.width(88);
    cout<<"Факультет: Доп.Образование"<<endl;
    cout.width(56);
    cout<<"Группа: 315"<<endl;
    cout.width(82);
    cout<<"Студент: Калинин Максим"<<endl;
    std::cout<<std::endl;

    cout.width(57);
    cout<<"Нижний Новгород 2024"<<endl;




    return a.exec();
}
