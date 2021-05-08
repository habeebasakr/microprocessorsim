//
//  WRITE.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "WRITE.hpp"
#include <iostream>
using namespace std;
WRITE::WRITE(int in1const, int in1addr, bool in1isaddr){

    this->in1constant = in1const;
    this->in1address = in1addr ;
 
    this->in1isaddr =in1isaddr ;

}
bool WRITE::execute(int& PC, DataMemory* mem){
    
    int in1 = (this->in1isaddr)? mem->get(this->in1address) : this->in1constant;
    
    cout<<"Out: "<<in1<<endl;
    
    return true;
}
