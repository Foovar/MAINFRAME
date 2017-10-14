//
//  LinkedList.cpp
//  LISTAS
//
//  Created by Alex Paredes on 14/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

/*
 * CREANDO NODO CONTENEDOR
 */
#include <stdio.h>
#include <iostream>

template<class T> class Node {
    T element;
    Node<T> * next;
    Node<T> * prev;
public:
    Node(): element(NULL){
        next = prev = nullptr;
    }
    Node(T e): element(e) {
        next = prev = nullptr;
    }
    Node(T e, Node<T> * n): element(e), next(n) {
        prev = nullptr;
    }
    Node(T e, Node<T> * n, Node<T> * p): element(e), next(n), prev(p) {
    }
    
    void setNext(Node<T> * e){
        this->next = e;
    }
    void setPrev(Node<T> * e){
        this->prev = e;
    }
    
    Node<T> * getNext(){
        return this->next;
    }
    
    Node<T> * getPrev(){
        return this->prev;
    }
    
    bool hasNext(){
        return this->next != nullptr;
    }
    bool hasPrev(){
        return this->prev != nullptr;
    }
    T getElement(){
        return this->element;
    }
};


template<typename T> class LinkedList {
    Node<T> * start;
    Node<T> * end;
    size_t length;
    
public:
    LinkedList(): start(nullptr), end(nullptr), length(0) { }
    void setStart(Node<T>* e){
        this->start = e;
    }
    
    void setEnd(Node<T> * e){
        this->end = e;
    }
    
    LinkedList<T> * insertToStart(T element){
        Node<T> * e = new Node<T>(element, this->start);
        if(this->start != nullptr) start->setPrev(e);
        !(bool) this->end && (this->end = e);
        return this->start = e, this;
    }
    
    LinkedList<T> * insertToEnd(T element){
        if(!(bool) this->start) return this->insertToStart(element);
        this->end->setNext(new Node<T>(element, nullptr , this->end));
        this->end = end->getNext();
        return this;
    }
    
    LinkedList<T> * insert(T element, size_t index = 0){
        if(index <= 0 || this->start == nullptr) return length++, this->insertToStart(element);
        if(index >= length) return length++, this->insertToEnd(element);
        Node<T> * s = this->findByIndex(index);
        Node<T> * e = new Node<T>(element, s->getNext(), s);
        s->getNext()->setPrev(e);
        s->setNext(e);
        
        length++;
        return this;
    }

    Node<T> *  findByIndex(size_t index){
        Node<T> * e = this->start;
        while(e != nullptr && --index && e->hasNext()){
            std::cout << "A recorrido " << index << std::endl;
            e = e->getNext();
        }
        return e;
    }
    
    void report(){
        Node<T> * e = this->start;
        while(e != nullptr){
            std:: cout << e->getElement() << " - " << length << std:: endl;
            if(e->hasNext()){
                e = e->getNext();
            }else break;
        }
        std::cout << std:: endl<<"Segundo recorrido. " <<std::endl;
        e = this->end;
        while(e != nullptr){
            std:: cout << e->getElement() << " - " << length << std:: endl;
            if(e->hasPrev()){
                e = e->getPrev();
            }else break;
        }
        
        std::cout << std:: endl<<"Busqueda reporte. " <<std::endl;
        e = this->findByIndex(2);
        std:: cout << e->getElement() << " - " << length << std:: endl;
    }
    
};




/*#ifndef LinkedList_hpp
#define LinkedList_hpp



#endif LinkedList_hpp */

