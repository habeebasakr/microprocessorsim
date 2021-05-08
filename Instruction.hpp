//
//  Instruction.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef Instruction_hpp
#define Instruction_hpp

#include <stdio.h>
#include <string>
#include "DataMemory.hpp"
class Instruction{
    
    public:
    
    virtual bool execute(int& PC, DataMemory* mem)=0;
    virtual    ~Instruction();
    
    
    
    
    
    
};




#endif /* Instruction_hpp */
