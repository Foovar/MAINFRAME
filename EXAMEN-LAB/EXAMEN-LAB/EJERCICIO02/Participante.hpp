//
//  Participante.hpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef Participante_hpp
#define Participante_hpp
#include "iostream"

struct Participante {
    int id, ki;
    std::string nombre;
    Participante(int a, int b, std::string c){
        this->id = a;
        this->ki = b;
        this->nombre = c;
    }
};

#endif /* Participante_hpp */
