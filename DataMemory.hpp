//
//  DataMemory.hpp
//  nSIM Assignment
//
//  Created by Habeeba Sakr on 11/24/20.
//

#ifndef DataMemory_hpp
#define DataMemory_hpp

#include <stdio.h>
#include <mutex>
#include <iostream>

using namespace std;

class DataMemory {
    int memory[1024];
    mutex locks[1024];
    
public:
    DataMemory();
    void set(int, int);
    int get(int);
    void printAt(int i){cout<< memory[i];}
};

#endif /* DataMemory_hpp */
