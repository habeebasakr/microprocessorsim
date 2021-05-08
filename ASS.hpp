//
//  ASS.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef ASS_hpp
#define ASS_hpp
#include "Instruction.hpp"
#include <stdio.h>
class ASS: public Instruction {
    
private:
    
    int in1const;
    int in1address;
    int out;
    bool in1isaddr;
    
public:
    ASS(int,int,int,bool);
    bool execute(int& PC, DataMemory* mem);
   // ~ASS();

    
};

#endif /* ASS_hpp */
