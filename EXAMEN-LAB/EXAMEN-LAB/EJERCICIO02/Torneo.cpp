//
//  Torneo.cpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "Torneo.hpp"

TorneoDelPoder::TorneoDelPoder(){
    this->grupos.push_back(Grupo("A", "Grupo A"));
    this->grupos.push_back(Grupo("B", "Grupo B"));
    this->grupos.push_back(Grupo("C", "Grupo C"));
}
