//
//  SIM.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/13/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef SIM_hpp
#define SIM_hpp

#include <stdio.h>
#include "Instruction.hpp"
#include "DataMemory.hpp"
#include <string>
using namespace std;
class SIM{
    
    
private:
    
    DataMemory* memory;
    Instruction* instmemory[1024];
    int PC;
    
public:
     
    SIM();
    static void  execute(SIM*);
    void   read(string);
    void   setDataMemory(DataMemory* d) {memory=d;}
    
};

#endif /* SIM_hpp */
