//
//  main.cpp
//  LISTAS
//
//  Created by Alex Paredes on 14/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include "LinkedList.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    LinkedList<int>  * list = new LinkedList<int>();
    list
        ->insert(100)
        ->insert(200)
        ->insert(300, 1)
        //->insertToEnd(500)
        //->insertToEnd(600)
        ->report();
    std::cout << "Hello, World!\n";
    return 0;
}
