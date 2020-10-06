//
// Created by Usuario on 5/10/2020.
//

#include "Pant2.h"

Pant2::Pant2(char size, const string &color, const string &material, const string &brand) : PrototypePant(size, color,
                                                                                                          material,
                                                                                                          brand), sizePrototype2(size), colorPrototype2(color) {}

PrototypePant *Pant2::clone() {
    return new Pant2(*this);
}

