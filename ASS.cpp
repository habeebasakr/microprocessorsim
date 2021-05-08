//
//  ASS.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "ASS.hpp"
ASS::ASS(int in1const, int in1addr,  int out, bool in1isaddr){

    this->in1const = in1const;
    this->in1address = in1addr ;
 
    this->out = out;
    this->in1isaddr =in1isaddr ;

}
bool ASS::execute(int& PC, DataMemory* mem){
    
    int in1 = (this->in1isaddr)? mem->get(this->in1address) : this->in1const;
    
    
    mem->set(out, in1);
    
    return true;
}
