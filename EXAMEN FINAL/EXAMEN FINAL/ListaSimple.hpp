//
//  ListaSimple.hpp
//  EXAMEN FINAL
//
//  Created by Alex Paredes on 11/12/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef ListaSimple_hpp
#define ListaSimple_hpp

// estructura Nodo, son para los elementos de la lista
template <class T> // declarar un template T = cualquier valor
struct Nodo {
    T elemento; // el valor del nodo, puede ser de cualquier tipo T
    Nodo siguiente; // el siguiente elemento, sera el que sigue en la lista
    // contructor, asignar a el valir de elemento
    Nodo(T e){
        elemento = e;
    }
    
};
// clase lista para almacenar los nodos
template <class T>// declarar un template T = cualquier valor
class ListaSimple {
    Nodo<T> * inicio; // el nodo de inicio, desde donde empieza a recorrer
    unsigned int totalElementos; // unsigned = sin signo, solo mayores o igual a cero, total de elementos
// siempre se pone esto antes del contructor
public:
    ListaSimple(){
        inicio = nullptr; // inicializar el puntero en puntero nulo
    }
    // metodo para agregar un nuevo elemento a lista
    void Agregar(T valor){ // recibe un valor de cualquier tipo
        
        Nodo<T> * nodo = new Nodo<T>(valor); // crear un Nodo de tipo T(cualquier tipo)
        
        // validar si hay cero elementos, si hay cero el inicio sera el primero elemento que se agrega y no se hace nada mas
        if(totalElementos == 0){
            inicio = nodo;
            
        }else{ // si hay mas de cero entonces al nodo le asignamos a su siguiete el nodo que esta en inicio
                // ahora el inicio pasaria a ser el siguiete queda algo como [nodo]->[ ex inicio]
            
            nodo->siguiente = inicio;
            // y a inicio se reemplaza por el nuevo valor queda inicio = nodo, osea ahora es [inicio] = [nodo]
            inicio = nodo;
            
            
            // en caso que se agregue mas elementos quedaria
            // [nuevo] -> [nodo] -> [inicio]
            // lo mismo seria  [inicio] -> [nodo] -> [nodo]
        }
        
        // se aumenta a el total de elementos
        totalElementos++;
    }
    
    void Eliminar() { }
    
    
};

#endif /* ListaSimple_hpp */
