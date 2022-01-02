//
// Created by stefa on 12/10/2021.
//

#include "Morcovi.h"

Morcovi::Morcovi():cantitate(0),pret_100_grame(0) {}

Morcovi::Morcovi(const int cantitate, const int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame) {}

Morcovi::~Morcovi() {}

bool Morcovi::isPortocale() {
    return false;
}

bool Morcovi::isNuci() {
    return false;
}

bool Morcovi::isMorcovi() {
    return true;
}

bool Morcovi::isBanana() {
    return false;
}

void Morcovi::afisare() {
    cout<<"Morcovi -> "<<this->getPret()<<endl;
}

float Morcovi::getPret() {
    return (float)((cantitate*pret_100_grame)/100);
}

int Morcovi::ordine() {
    return 3;
}


