//
//  NotasAleatorias.hpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef NotasAleatorias_hpp
#define NotasAleatorias_hpp

class NotasAleatorias {
    int totalNotas;
    int min, max;
    
public:
    NotasAleatorias(int total, int min = 7, int max = 13);
    void ImprimirNotas();
    void ImprimirGrafico();
};

#endif /* NotasAleatorias_hpp */
