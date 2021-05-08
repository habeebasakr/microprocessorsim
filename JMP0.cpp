//
//  JMP0.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "JMP0.hpp"
JMP0::JMP0(int in1addr,int in1const,int a1,bool in1isaddr){
 
    this->in1constant = in1const;
    this->in1address = in1addr ;
    this->a1 = a1;
    this->in1isaddr = in1isaddr ;

}
bool JMP0::execute(int& PC, DataMemory* mem){
    
  int in1 = (this->in1isaddr)? mem->get(this->in1address) : this->in1constant;
 
    if(a1<=1024 && a1>=0)
    if (in1==0)
        PC=a1;
       
    
    return true;
}
