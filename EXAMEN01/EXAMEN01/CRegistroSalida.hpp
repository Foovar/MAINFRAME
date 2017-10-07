//
//  CRegistroSalida.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CRegistroSalida_hpp
#define CRegistroSalida_hpp

#include <stdio.h>

class CRegistroSalida {
    short fechaSalida;
    short horaSalida;
    char * placa;
    char * nombreConductor;
    short cantidadPasajeros;
    char * campusOrigin;
    char * campusLlegada;
    short kilometraje;
public:
    CRegistroSalida();
};

#endif /* CRegistroSalida_hpp */
