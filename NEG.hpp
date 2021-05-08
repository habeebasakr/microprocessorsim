//
//  NEG.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef NEG_hpp
#define NEG_hpp
#include "Instruction.hpp"
#include <stdio.h>
class NEG: public Instruction{
private:
    
    int in1const;
    int in1address;
    int out;
    bool in1isaddr;
public:
    
    NEG(int,int,int,bool);
    bool execute(int& PC, DataMemory* mem);

    
};



#endif /* NEG_hpp */
