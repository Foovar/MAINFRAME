//
//  Grupo.hpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef Grupo_hpp
#define Grupo_hpp
#include "iostream"

struct Grupo {
    char codigo;
    std::string descripcion;
    Grupo(char a, std::string b){
        this->codigo = a;
        this->descripcion = b;
    }
};

#endif /* Grupo_hpp */
