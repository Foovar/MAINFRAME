//
//  CSede.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CSede_hpp
#define CSede_hpp

#include <stdio.h>
#include "CBus.hpp"

class CSede{
    CBus * buses;
    char * nombre;
public:
    CSede();
    CSede(char * nombre);
    char * getNombre();
    
    void agregarBus();
};

#endif /* CSede_hpp */
