//
// Created by Usuario on 5/10/2020.
//

#ifndef PRESENTATION_PROGRA_2_PROTOTYPEFACTORY_H
#define PRESENTATION_PROGRA_2_PROTOTYPEFACTORY_H

#include <unordered_map>
#include "PrototypePant.h"
#include "Pant2.h"
#include "Pant1.h"

class PrototypeFactory {

    unordered_map<Type, PrototypePant*, hash<int>> prototype_;

public:

    PrototypeFactory(){

        prototype_[Type::P1] = new Pant1('M',"amarillo","tela","levi´s");
        prototype_[Type::P2] = new Pant2('S', "azul", "lino", "levi´s");

    }


    /* el metodo recibe el tipo de prototipo que se desee,
     este metodo creara el clone apartir del objeto recibido */

    PrototypePant *CreatePrototype(Type type){

        return prototype_[type]->clone();

    }








    //liberacion de memoria
    virtual ~PrototypeFactory() {

        delete prototype_[Type::P1];
        delete prototype_[Type::P2];

    }

};


#endif //PRESENTATION_PROGRA_2_PROTOTYPEFACTORY_H
