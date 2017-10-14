//
//  list.hpp
//  PRACTICANDO
//
//  Created by Alex Paredes on 12/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

template<class T> class Nodo
{
  Nodo<T> * siguiente;
  T elemento;

  public:
    Nodo(){
      this->elemento = NULL;
      this->siguiente = nullptr;
    }
    void setSiguiente(Nodo<T> * a){
      this->siguiente = a;
    }
};


template<class T> class Lista
{
  Nodo<T> * inicio;
  size_t length;

  public:
    Lista(){
      this->inicio = nullptr;
      length = 0;
    }

    void insert(T elemento){
      Nodo<T> * nuevo = new Nodo<T>(elemento);
      nuevo->setSiguiente(inicio);
      this->inicio = nuevo;
    }
};
