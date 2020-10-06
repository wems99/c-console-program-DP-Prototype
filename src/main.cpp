//
// Created by Tere Solano on 5/10/2020.
//
#include <iostream>
#include "PrototypeFactory.h"
#include "PrototypePant.h"
#include "Client.h"



int main(){

        Client client;

        PrototypeFactory *prototypeFactory = new PrototypeFactory();

        client.processClient(*prototypeFactory);

        delete prototypeFactory;

    return 0;
}