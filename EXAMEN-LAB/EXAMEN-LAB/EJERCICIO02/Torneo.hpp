//
//  Torneo.hpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef Torneo_hpp
#define Torneo_hpp

#include "iostream"
#include <vector>
#include "Grupo.hpp"
#include "Participante.hpp"

class TorneoDelPoder {
    std::vector<Grupo*> grupos;
    std::vector<Participante*> tablaPeleadores;
    
public:
    TorneoDelPoder();
    void NuevoParticipante(std::string nombre, int ki);
};

#endif /* Torneo_hpp */
