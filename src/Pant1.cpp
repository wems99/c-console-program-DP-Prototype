//
// Created by Tere Solano on 5/10/2020.
//

#include "Pant1.h"

Pant1::Pant1(char size, const string &color) {
    this->setSize(size);
    this->setColor(color);
    this->setMaterial("Cuero sintetico");
    this->setBrand("Gucci");
}

PrototypePant Pant1::clone() {
    return new Pant1(this->size,this->color);
}

/*public Camiseta clone(){
    return new CamisetaMCorta(this.talla, this.color, this.estampado);
}
*(

