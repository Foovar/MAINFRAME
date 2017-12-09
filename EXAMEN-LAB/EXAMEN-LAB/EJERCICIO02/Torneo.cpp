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

Participante TorneoDelPoder::obtenerParticipanteRandom(){
    return *this->tablaPeleadores[rand() % this->tablaPeleadores.size()];
}

Grupo TorneoDelPoder::obtenerGrupoRandom(){
    return *this->grupos[rand() % this->grupos.size()];
}

int TorneoDelPoder::CantidadPeleasJugador(int i){
    return this->tablaPeleadores.at(i)->totalPeleas;
}

void TorneoDelPoder::MostrarJugadores(){
    for(int i = 0; i < this->tablaPeleadores.size(); i++){
        std::cout << "Peleador: " << this->tablaPeleadores.at(i)->nombre << "\t" << " Ki: " << this->tablaPeleadores.at(i)->ki << std::endl;
    }
}

void TorneoDelPoder::OrdenarPorKi(){
   // this->tablaPeleadores
}
