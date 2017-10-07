//
//  main.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include "CSede.hpp"

int main(int argc, const char * argv[]) {
    CSede ** sedes = new CSede*[3];
    sedes[0] = new CSede((char*)"Campus1");
    sedes[1] = new CSede((char*)"Campus2");
    sedes[2] = new CSede((char*)"Capiña");
    
    
    
    
    std::cout << sedes[2]->getNombre() <<std::endl;
    
    
    
    
    return 0;
}
