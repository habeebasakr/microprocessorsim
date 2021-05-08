//
//  JMP0.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef JMP0_hpp
#define JMP0_hpp
#include "Instruction.hpp"
#include <stdio.h>

class JMP0: public Instruction{
private:
    
    int in1address;
    int in1constant;
    int a1;
    bool in1isaddr;

public: 
    JMP0(int,int,int,bool);
    bool execute(int& PC, DataMemory* mem);

    
    
};

#endif /* JMP0_hpp */
