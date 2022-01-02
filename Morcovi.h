//
// Created by stefa on 12/10/2021.
//

#ifndef LAB8_MORCOVI_H
#define LAB8_MORCOVI_H
#include <iostream>
#include "base.h"
using namespace std;

class Morcovi:public base {
    int cantitate;//grame
    int pret_100_grame;
public:
    Morcovi();
    Morcovi(const int,const int);
    ~Morcovi();
    bool isPortocale();
    bool isNuci();
    bool isMorcovi();
    bool isBanana();
    void afisare();
    float getPret();
    int ordine();
};


#endif //LAB8_MORCOVI_H
