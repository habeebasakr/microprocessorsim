//
//  HALT.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef HALT_hpp
#define HALT_hpp
#include "Instruction.hpp"
#include <stdio.h>

class HALT: public Instruction {
    
public:
    HALT();
    bool execute(int& PC, DataMemory* mem);

    
    
};

#endif /* HALT_hpp */
