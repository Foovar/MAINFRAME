//
//  NotasAleatorias.hpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef NotasAleatorias_hpp
#define NotasAleatorias_hpp
#include "iostream"
#include <stdlib.h>
#include <time.h>

class NotasAleatorias {
    int totalNotas;
    int min, max;
    int * notas;
public:
    NotasAleatorias(int total, int min = 7, int max = 13);
    void ImprimirNotas();
    void ImprimirGrafico();
    void GenerarNotas();
    int CantidadSobreMedia();
private:
    int TotalAprobados();
    int TotalDesaprobados();
    float PromedioTotal();
};

#endif /* NotasAleatorias_hpp */
