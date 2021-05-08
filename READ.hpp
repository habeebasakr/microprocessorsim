//
//  READ.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef READ_hpp
#define READ_hpp
#include "Instruction.hpp"
#include <stdio.h>
class READ: public Instruction {
    
private:
    int in1address;
    
public:
    
    READ(int);
    bool execute(int& PC, DataMemory* mem);

    
};

#endif /* READ_hpp */
