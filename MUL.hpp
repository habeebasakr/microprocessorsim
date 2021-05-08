//
//  MUL.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef MUL_hpp
#define MUL_hpp
#include "Instruction.hpp"
#include <stdio.h>


class MUL: public Instruction{
private:
    int in1const;
    int in1address;
    int in2const;
    int in2address;
    int out;
    bool in1isaddr;
    bool in2isaddr;

public:
   
    MUL(int, int, int, int, int, bool, bool);
    bool execute(int& PC, DataMemory* mem);
    ~MUL(){}
    
    
    
};




#endif /* MUL_hpp */
