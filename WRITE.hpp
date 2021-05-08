//
//  WRITE.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef WRITE_hpp
#define WRITE_hpp
#include "Instruction.hpp"
#include <stdio.h>
class WRITE: public Instruction{
 private:
    
    int in1address;
    int in1constant;
    bool in1isaddr;


public:
    WRITE(int,int,bool);
    bool execute(int& PC, DataMemory* mem);

    
    
    
};

#endif /* WRITE_hpp */
