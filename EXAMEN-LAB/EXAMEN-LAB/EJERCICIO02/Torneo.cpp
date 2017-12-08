//
//  Torneo.cpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "Torneo.hpp"

TorneoDelPoder::TorneoDelPoder(){
    this->grupos.push_back(new Grupo('A', "Grupo A"));
    this->grupos.push_back(new Grupo('B', "Grupo B"));
    this->grupos.push_back(new Grupo('C', "Grupo C"));
    this->NuevoParticipante("Goku", 10000);
}

void TorneoDelPoder::NuevoParticipante(std::string nombre, int ki){
    this->tablaPeleadores.push_back(new Participante((int)this->tablaPeleadores.size()+1 , ki, nombre));
}
