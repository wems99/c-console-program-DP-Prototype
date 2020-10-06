//
// Created by Tere Solano on 5/10/2020.
//

#ifndef PRESENTATION_PROGRA_2_PANT1_H
#define PRESENTATION_PROGRA_2_PANT1_H
#include "PrototypePant.h"

class Pant1 : public PrototypePant{
public:

    Pant1(char size, const string &color);

    PrototypePant clone() override;

};


#endif //PRESENTATION_PROGRA_2_PANT1_H
