//
//  main.cpp
//  EXAMEN FINAL
//
//  Created by Alex Paredes on 11/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int N;
    float a, b, resultado = 0;
    
programita:
    std::cout << "Ingrese N: "; // imprimir mensaje
    std::cin >> N; // guarda el valor ingresado en n
    std::cout << std::endl;// imprimir salto de linea para que no se vea feo
    
    if( N < 0){ // validar que N no sea menor que cero
        std::cout << "(ERROR) El valor de N no puede ser negativo.\n"; // imprimir mensaje
        goto programita; // ir arriba(programita) si n es menor
    }
pedirA:
    std::cout << "Ingrese a: ";// imprimir mensaje
    std::cin >> a;// guarda el valor ingresado en a
    std::cout << std::endl;// imprimir salto de linea para que no se vea feo
    
    if(a < 1 || a > 5){ // validar si a es menor que 1 o a es mayor que 5
        std::cout << "(ERROR) El rango de a es de 1 a 5.\n"; // imprimir mensaje
        goto pedirA; // ir a pedirA si no esta en el rango
    }
    
pedirB:
    std::cout << "Ingrese b: ";// imprimir mensaje
    std::cin >> b;// guarda el valor ingresado en b
    std::cout << std::endl;// imprimir salto de linea para que no se vea feo
    
    if(b < 1 || b > 5){// validar si b es menor que 1 o b es mayor que 5
        std::cout << "(ERROR) El rango de b es de 1 a 5.\n"; // imprimir mensaje
        goto pedirB; // ir a pedirB si no esta en el rango
    }
    // unsigned = sin signe, no es importante se puede borrar y solo dejar int.
    // d = 2, es otra variable es la parte que divide empieza en 2
    // d*=2 = multiplica por 2 el que divide, es igual a d = d * 2;
    for(unsigned int i = 0, d = 2; i < N; i++, d*=2){
        resultado += (pow(a, b * (i+1)))/d; // pow es para elevar un numero  a^b
    }
    
    std::cout << "Resultado = "<< resultado << std::endl;
    
    return 0;
}
