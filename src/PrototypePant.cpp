//
// Created by Tere Solano on 5/10/2020.
//

#include "PrototypePant.h"

PrototypePant::PrototypePant(char size, const string &color, const string &material, const string &brand){

    this->size = size;
    this->color = color;
    this->material = material;
    this->brand = brand;

}

char PrototypePant::getSize() const {
    return size;
}

void PrototypePant::setSize(char size) {
    PrototypePant::size = size;
}

const string &PrototypePant::getColor() const {
    return color;
}

void PrototypePant::setColor(const string &color) {
    PrototypePant::color = color;
}

const string &PrototypePant::getMaterial() const {
    return material;
}

void PrototypePant::setMaterial(const string &material) {
    PrototypePant::material = material;
}

const string &PrototypePant::getBrand() const {
    return brand;
}

void PrototypePant::setBrand(const string &brand) {
    PrototypePant::brand = brand;
}

PrototypePant::~PrototypePant() {

}

string PrototypePant::printAMassage(char prototypeSize_, string prototypeColor_) {
    stringstream s;
    this->size = prototypeSize_;
    this->color = prototypeColor_;

    s<<"Talla del pantalon: " << prototypeSize_ << " de color "<< prototypeColor_ <<endl;
    s<<"el material del pantalon es: " << material <<endl;
    s<<" marca " << brand <<endl;
    return s.str();
}



