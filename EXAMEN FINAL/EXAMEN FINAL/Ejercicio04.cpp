//
//  Ejercicio04.cpp
//  EXAMEN FINAL
//
//  Created by Alex Paredes on 12/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "iostream"

int main(int argc, const char * argv[]) {
    int N = 0;
    char p1, p2, p3;
inicio:
    std::cout << "Ingresa el numero de clientes: " << std::endl;
    std::cin >> N;
    if( N < 0 || N > 100) goto inicio;

    for(int i = 0; i < N; i++){
    
        std::cout << "Cliente " << ( i + 1) << std::endl;
    pregunta1:
        std::cout << "¿Desde cuándo es cliente? " << std::endl;
        std::cin >> p1;
    pregunta2:
        std::cout << "¿Cuál es su grado de satisfacción con el servicio brindado? " << std::endl;
        std::cin >> p2;
    pregunta3:
        std::cout << "Edad: " << std::endl;
        std::cin >> p3;
        if( p3 < 18 || p3 > 60) {
            std::cout << "La edad tiene que estar entre 10 y 60 años" << std::endl;
            goto pregunta3;
        }
    }
    
}

