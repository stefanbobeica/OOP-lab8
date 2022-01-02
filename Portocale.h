//
// Created by stefa on 12/10/2021.
//

#ifndef LAB8_PORTOCALE_H
#define LAB8_PORTOCALE_H
#include <iostream>
#include "base.h"
using namespace std;

class Portocale:public base {
private:
    int nr_kilograme;
    int pret_kg;
public:
    Portocale();
    Portocale(const int, const int);
    ~Portocale();
     bool isPortocale();
     bool isNuci();
     bool isMorcovi();
     bool isBanana();
     void afisare();
     float  getPret();
     int ordine();
};


#endif //LAB8_PORTOCALE_H
