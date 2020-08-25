#include <QCoreApplication>

/*
    What
    Generics in QObjects

    Description
    Can put generic code in QObject, but cant put a QObject in generic code

    Why
    QObjects should not be copied

    Example
    Fun with templates

 */

#include <QDebug>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass myclass;
    qInfo() << myclass.add(2,3);
    qInfo() << myclass.add(6.34,8.12);

    MyClass m1;
    MyClass m2;
    MyClass m3 = myclass.add(m1,m2); //again deleted copy constructor

    return a.exec();
}
