//
// Created by stefa on 12/10/2021.
//

#ifndef LAB8_BANANA_H
#define LAB8_BANANA_H
#include <iostream>
#include "base.h"
using namespace std;

class Banana:public base {
    int pret_bucata;
public:
    Banana();
    Banana(const int);
    ~Banana();
    bool isPortocale();
    bool isNuci();
    bool isMorcovi();
    bool isBanana();
    void afisare();
    float getPret();
    int ordine();
};


#endif //LAB8_BANANA_H
