//
// Created by stefa on 12/10/2021.
//

#ifndef LAB8_BASE_H
#define LAB8_BASE_H
#include <iostream>
#include <cstring>
using namespace std;

class base {
public:
    virtual  bool isPortocale()=0;
    virtual  bool isBanana()=0;
    virtual  bool isNuci()=0;
    virtual  bool isMorcovi()=0;
    virtual ~base()=0;
    virtual void afisare()=0;
    virtual float getPret()=0;
    virtual int ordine()=0;
};


#endif //LAB8_BASE_H
