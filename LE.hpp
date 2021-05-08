//
//  LE.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef LE_hpp
#define LE_hpp
#include "Instruction.hpp"
#include <stdio.h>


class LE: public Instruction {
private:
    int in1const;
    int in1address;
    int in2const;
    int in2address;
    int out;
    bool in1isaddr;
    bool in2isaddr;
public:
    LE(int, int,int,int,int,bool,bool);
    bool execute(int& PC, DataMemory* mem);
  //  ~LE();
    
    
};



#endif /* LE_hpp */
