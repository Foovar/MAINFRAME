//
//  CBus.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CBus_hpp
#define CBus_hpp

#include <stdio.h>
#include "CConductor.hpp"

class CBus {
    short capacidadMaxima;
    char * placa;
    short cantidadPasajeros;
    CConductor * conductor; //  Relacion de agregacion.

public:
    CBus();
    CBus(char *, short, CConductor); // constructor sobrecargado.
    CConductor getConductor();
    short getCantidadPasajeros(); // Metodos Get
    char * getPlaca();
    
    void setConductor(CConductor); // Metodos Set
    void setCantidadPasajeros(short);
};

#endif /* CBus_hpp */
