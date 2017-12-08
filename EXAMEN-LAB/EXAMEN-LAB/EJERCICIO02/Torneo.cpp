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
    this->NuevoParticipante("Krillin", 1000);
    this->NuevoParticipante("Cell", 12000);
    this->NuevoParticipante("Piccolo", 5000);
    this->NuevoParticipante("Gohan", 5000);
    this->NuevoParticipante("Mr. Satan", 999999);
    this->NuevoParticipante("Nro. 18", 6000);
    this->NuevoParticipante("Nro. 17", 6000);
    this->NuevoParticipante("Yamcha", 3);
    this->NuevoParticipante("Vegeta", 9000);
    this->NuevoParticipante("Frezer", 8500);
    this->NuevoParticipante("Maestro Roshi", 4000);
}

void TorneoDelPoder::NuevoParticipante(std::string nombre, int ki){
    this->tablaPeleadores.push_back(new Participante((int)this->tablaPeleadores.size()+1 , ki, nombre));
}

void TorneoDelPoder::NuevaPelea(){
    
}

