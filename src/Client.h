//
// Created by Usuario on 5/10/2020.
//

#ifndef PRESENTATION_PROGRA_2_CLIENT_H
#define PRESENTATION_PROGRA_2_CLIENT_H
#include "PrototypeFactory.h"
#include "PrototypePant.h"

class Client {

public:

    void processClient(PrototypeFactory &prototype_Factory){

        cout<<" **escogiendo el primer tipo de pantalon** "<<endl;

        PrototypePant *prototypePant = prototype_Factory.CreatePrototype(Type::P1);
        prototypePant->printAMassage('S', "rojo");
        //liberar memoria
        delete prototypePant;

        cout<<" **escogiendo el segundo tipo de pantalon** "<<endl;

        prototypePant = prototype_Factory.CreatePrototype(Type::P2);
        prototypePant->printAMassage('L', "morado");
        //liberar memoria
        delete prototypePant;


    }

};


#endif //PRESENTATION_PROGRA_2_CLIENT_H
