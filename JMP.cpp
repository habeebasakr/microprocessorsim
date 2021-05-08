//
//  JMP.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "JMP.hpp"

JMP::JMP(int in1addr){

this->in1address = in1addr ;
}
bool JMP::execute(int& PC, DataMemory* mem){
    
   if(in1address<=1024 && in1address>=0)
    PC=in1address;
    
    return true;
}
