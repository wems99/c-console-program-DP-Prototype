//
// Created by Usuario on 5/10/2020.
//

#ifndef PRESENTATION_PROGRA_2_PANT2_H
#define PRESENTATION_PROGRA_2_PANT2_H
#include "PrototypePant.h"

class Pant2: public PrototypePant {

private:

    char sizePrototype2;
    string colorPrototype2;

public:

    Pant2(char size, const string &color, const string &material, const string &brand);
    PrototypePant *clone() override;

};


#endif //PRESENTATION_PROGRA_2_PANT2_H
