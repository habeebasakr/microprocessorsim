//
//  JMP.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef JMP_hpp
#define JMP_hpp
#include "Instruction.hpp"
#include <stdio.h>
class JMP: public Instruction{
private:
    int in1address;
public: 
    JMP(int);
    bool execute(int& PC, DataMemory* mem);

    
};



#endif /* JMP_hpp */
