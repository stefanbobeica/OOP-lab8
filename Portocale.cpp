//
// Created by stefa on 12/10/2021.
//

#include "Portocale.h"

Portocale::Portocale():nr_kilograme(0),pret_kg(0) {}

Portocale::Portocale(const int nr_kilograme, const int pret_kg):nr_kilograme(nr_kilograme),pret_kg(pret_kg) {}

Portocale::~Portocale() {}

bool Portocale::isPortocale() {
    return true;
}

bool Portocale::isNuci() {
    return false;
}

bool Portocale::isMorcovi() {
    return false;
}

bool Portocale::isBanana() {
    return false;
}

void Portocale::afisare() {
cout<<"Portocale -> "<<this->getPret()<<endl;
}

float Portocale::getPret() {
    return (float)(pret_kg * nr_kilograme);
}

int Portocale::ordine() {
    return 2;
}

