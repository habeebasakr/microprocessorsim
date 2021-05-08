//
//  ADD.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "ADD.hpp"
ADD::ADD(int in1const, int in1addr, int in2const, int in2addr, int out, bool in1isaddr, bool in2isaddr){

    this->in1const = in1const;
    this->in1address = in1addr ;
    this->in2const = in2const;
    this->in2address = in2addr;
    this->out = out;
    this->in1isaddr =in1isaddr ;
    this->in2isaddr =in2isaddr ;

}
bool ADD::execute(int& PC, DataMemory* mem){
    
    int in1 = (this->in1isaddr)? mem->get(this->in1address) : this->in1const;
    int in2 = (this->in2isaddr)? mem->get(this->in2address) : this->in2const;
    
    mem->set(out, in1 + in2);
    return true;
}
