#ifndef CANINE_H
#define CANINE_H
#include "mammal.h"

#include <QObject>

class Canine : public Mammal
{
    Q_OBJECT
public:
    explicit Canine(QObject *parent = 0);

    void bark();

signals:

public slots:
};

#endif // CANINE_H
