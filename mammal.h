#ifndef MAMMAL_H
#define MAMMAL_H

#include <QObject>
#include "animal.h"

class Mammal : public Animal
{
    Q_OBJECT
public:
    explicit Mammal(QObject *parent = 0);

    bool hasBackBone(){ return true; }

signals:

public slots:
};

#endif // MAMMAL_H
