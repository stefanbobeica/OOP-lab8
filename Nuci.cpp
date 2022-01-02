//
// Created by stefa on 12/10/2021.
//

#include "Nuci.h"

Nuci::Nuci():cantitate(0),pret_100_grame(0) {}

Nuci::Nuci(const int cantitate, const int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame) {}

Nuci::~Nuci() {}

bool Nuci::isPortocale() {
    return false;
}

bool Nuci::isNuci() {
    return true;
}

bool Nuci::isMorcovi() {
    return false;
}

bool Nuci::isBanana() {
    return false;
}

void Nuci::afisare() {
    cout<<"Nuci -> "<<this->getPret()<<endl;
}

float Nuci::getPret() {
    return (float)((cantitate*pret_100_grame)/100);
}

int Nuci::ordine() {
    return 4;
}




