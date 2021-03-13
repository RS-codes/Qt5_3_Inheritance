#include <QCoreApplication>
//pause-1 #include "animal.h"
//pause-2 #include "mammal.h"
#include "canine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //pass-1
    // Animal cat;
    // qInfo() << cat.isAlive();

    //pass-2
//    Mammal bat;
//    qInfo() << bat.isAlive();
//    qInfo() << bat.hasBackBone();

    Canine dog;
    qInfo() << dog.isAlive();
    qInfo() << dog.hasBackBone();
    dog.bark();

    return a.exec();
}
