//
// Created by stefa on 12/10/2021.
//

#include "Banana.h"

Banana::Banana():pret_bucata(0) {}

Banana::Banana(const int pret_bucata):pret_bucata(pret_bucata) {}

Banana::~Banana() {}

bool Banana::isPortocale() {
    return false;
}

bool Banana::isNuci() {
    return false;
}

bool Banana::isMorcovi() {
    return false;
}

bool Banana::isBanana() {
    return true;
}

void Banana::afisare() {
    cout<<"Banana -> "<<this->getPret()<<endl;
}

float Banana::getPret() {
    return pret_bucata;
}

int Banana::ordine() {
    return 1;
}


