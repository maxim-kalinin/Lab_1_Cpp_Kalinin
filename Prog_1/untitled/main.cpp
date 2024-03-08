/*
 * Номер группы 315, факультет ООП на языке С++
 * Разработчики программы 1. Калинин Максим
 * Номер Лабораторной работы -1  программа -1
 */


#include <QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout<<"/*"<<std::endl;
    std::cout<< " *Это многострочный комментарий" <<std::endl;
    std::cout<< " *Номер группы 315, факультет ООП на языке С++" <<std::endl;
    std::cout<< " *Разработчики программы 1. Калинин Максим" <<std::endl;
    std::cout<< " *                       2. Максим Калинин" <<std::endl;
    std::cout<< " *Номер Лабораторной работы - 1" <<std::endl;
    std::cout<<" */"<<std::endl;
    std::cout<<std::endl;
    std::cout<< "// Это однострочный комментарий" <<std::endl;
    std::cout<<std::endl;
    std::cout<< "#if 0" <<std::endl;
    std::cout<< "    Это комментарий при помощи деректив" <<std::endl;
    std::cout<< "#endif" <<std::endl;
    std::cout<<std::endl;
    std::cout<< "Исполняемый файл debug равен 30,8 KiB (31 576 bytes)" <<std::endl;
    std::cout<< "Исполняемый файл release равен 17,4 KiB (17 776 bytes)" <<std::endl;



    return a.exec();
}
