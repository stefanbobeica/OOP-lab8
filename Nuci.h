//
// Created by stefa on 12/10/2021.
//

#ifndef LAB8_NUCI_H
#define LAB8_NUCI_H
#include <iostream>
#include "base.h"
using namespace std;

class Nuci:public base {
    int cantitate;//grame
    int pret_100_grame;
public:
    Nuci();
    Nuci(const int, const int);
    ~Nuci();
    bool isPortocale();
    bool isNuci();
    bool isMorcovi();
    bool isBanana();
    void afisare();
    float getPret();
    int ordine();

};


#endif //LAB8_NUCI_H
