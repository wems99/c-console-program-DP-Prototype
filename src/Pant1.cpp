//
// Created by Tere Solano on 5/10/2020.
//

#include "Pant1.h"

Pant1::Pant1(char size, const string &color, const string &material, const string &brand) : PrototypePant(size, color,
                                                                                                          material,
                                                                                                          brand), sizePrototype1(size), colorPrototype1(color) {}

PrototypePant *Pant1::clone() {
    return new Pant1(*this);
}


