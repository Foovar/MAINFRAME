//
//  main.cpp
//  EXAMEN-LAB
//
//  Created by Alex Paredes on 7/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include "EJERCICIO01/NotasAleatorias.hpp"
void clearScreen(){
    system("clear");
}


void mainMenu(){
    clearScreen();
    std::cout << "1.- Ejercicio 01\n2.- Ejercicio 02\n3.- Ejercicio 03\n0.- Salir\n";
    std::cout << "Elige un ejercicio: " << std::endl;
}


int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    int nejercicio = -1, a;
    NotasAleatorias * notas;
    
_mainMenu:
    mainMenu();
    std::cin >> nejercicio;
   
    switch (nejercicio) {
        case 1:
        clearScreen();
        ejercicio01:
            std::cout << "Ingresa la cantidad de notas a generar: " << std::endl;
            std::cin >> a;
            if(a > 30 || a < 0) {
                std::cout << " >> No puede ser mayor a 30 o menor que cero."<<std::endl;
                goto ejercicio01;
            }
            
            notas = new NotasAleatorias(a);
            notas->GenerarNotas();
            notas->ImprimirNotas();
            
            std::cout << "Cantidad de alumnos sobre la media: " << notas->CantidadSobreMedia() << std::endl;
            
            notas->ImprimirGrafico();
            
            break;
        case 2:
            clearScreen();
            
            break;
        case 3:
            clearScreen();
            break;
        default:
            goto _mainMenu;
            break;
    }
    return 0;
}
