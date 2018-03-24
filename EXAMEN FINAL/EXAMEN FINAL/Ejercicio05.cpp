//
//  main.cpp
//  EXAMEN FINAL
//
//  Created by Alex Paredes on 11/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include <math.h> // es importante para hacer pow
#include "ListaSimple.hpp" // importante para usar listas
#include <fstream> // es importante para usar la escritura de archivos

// lo e creado un metodo para el ejericio 1 para obtener el valor de cada operacion

float ejericio01() {
    int N; // declarar para enteros
    float a, b, resultado = 0; // declarar a, b, resultado por que son decimales
    
programita: // etiqueta, es como dejar una marca para regresar hasta aqui desde mas abajo del codigo
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
        
        // por si viene el de laysa seria:
        // resultado += (pow(a, b * (i+1)))/pow(2, i+1);
        // y el for seria = for(unsigned int i = 0; i < N; i++)
        
    }
    
    std::cout << "Resultado = "<< resultado << std::endl; // imprimir resultado
    
    return resultado; // retorna el valor de la operacion
}


int main2(int argc, const char * argv[]) {
    
    std::ofstream ArchivoResultados; // crear el objeto para el archivos
    ArchivoResultados.open ("resultados.txt"); // abrir el archivo donde se va a guarda los resultados
    
    ListaSimple<float> * lista = new ListaSimple<float>(); // crear la lista simple <float> = es el tipo de dato que se usara por que el resultado del calculo es de tipo float, osea decimales
    // ejecutamos 4 veces el metodo para hacer calculos
    lista->Agregar( ejericio01() ); // lista->agregar( resultado de la operacion ) = guarda el valor en la lista
    lista->Agregar( ejericio01() ); // igual al primero
    lista->Agregar( ejericio01() ); // igual al primero
    lista->Agregar( ejericio01() ); // igual al primero

    Nodo<float> * elemento = lista->ObtenerInicio(); // obtenemos el inicio de la lista para empezar poder obtener los valores de la lista
    
    // recorremos la lista hasta que sea menor que el total de elementos osea de 0 a 3
    for(int i = 0; i < lista->TotalElementos(); i++){
        // << = sirve para agregar al archivo como un append, escribe el valor del elemento de la lista
        ArchivoResultados << elemento->valor; // valor es el resultado de ejericio01
        // esto sirve para hacer que la linea salte hacia aabajo, osea sin \n solo será (123456), pero con \n seria:
        // 1
        // 2
        // 3
        // ... hacia abajo
        ArchivoResultados <<"\n";
        
        // arriba obtenemos el inicio pero ahora lo cambiamos el valor para que sea el siguiente elemento.
        // ahora elemento tendra el valor del nodo que sigue
        elemento = elemento->siguiente;
    }
    
    // cuando se termina de escribir en el archivo, se cierra el proceso de escritura para que termine de escribir, sino se cierra nunca se guarda lo que escribiste por que se queda en el buffer.
    ArchivoResultados.close();
    
    return 0;
}
