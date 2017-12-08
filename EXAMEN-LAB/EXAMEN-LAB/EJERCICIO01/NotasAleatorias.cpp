//
//  NotasAleatorias.cpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "NotasAleatorias.hpp"
 
NotasAleatorias::NotasAleatorias(int total, int min, int max){
    this->totalNotas = total;
    this->min = min;
    this->max = max;
    this->notas = new int[this->totalNotas];
}

void NotasAleatorias::GenerarNotas(){
    for(int i = 0; i < this->totalNotas; i++){
        this->notas[i] = rand() % this->min + (this->max - this->min  + 1);
    }
}

void NotasAleatorias::ImprimirNotas(){
    for(int i = 0; i < this->totalNotas; i++){
        std::cout << "Nota[" << i << "] \t = " << this->notas[i] << std::endl;
    }
    std::cout << "Total aprobados: " << this->TotalAprobados() <<std::endl;
    std::cout << "Total desaprobados: " << this->TotalDesaprobados()<<std::endl;
}

void NotasAleatorias::ImprimirGrafico(){
    std::cout <<std::endl <<std::endl;
    for(int i = this->TotalAprobados() > this->TotalDesaprobados() ? this->TotalAprobados() : this->TotalDesaprobados(); i > 0 ; i--){
        std::cout << i << "\t| ";
        if(this->TotalAprobados() >= i) std::cout << " *    ";
        else std::cout << "      ";
        
        if(this->TotalDesaprobados() >= i) std::cout << " *    ";
        std::cout<<std::endl;
    }
    std::cout << "\t --------------------"<<std::endl;
    std::cout << "\t   :D" << "   x.x "<<std::endl;
}

int NotasAleatorias::CantidadSobreMedia(){
    int total = 0;
    for(int i = 0; i < this->totalNotas; i++){
        if( this->notas[i] >= this->PromedioTotal()) total++;
    }
   return total;
}

float NotasAleatorias::PromedioTotal(){
    int total = 0;
    for(int i = 0; i < this->totalNotas; i++){
        total += this->notas[i];
    }
    return total / this->totalNotas;
}

int NotasAleatorias::TotalAprobados(){
    int aprobados = 0;
    for(int i = 0; i < this->totalNotas; i++){
        if(this->notas[i] > 10) aprobados++;
    }
    return aprobados;
}

int NotasAleatorias::TotalDesaprobados(){
    int desaprobados = 0;
    for(int i = 0; i < this->totalNotas; i++){
        if(this->notas[i] < 10) desaprobados++;
    }
    return desaprobados;
}

