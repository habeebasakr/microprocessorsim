//
//  READ.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "READ.hpp"
#include <iostream>
using namespace std;

READ::READ( int in1addr){

    this->in1address = in1addr ;
 

}
bool READ::execute(int& PC, DataMemory* mem){
    
    int in;
    cout<<"In: ";
           cin>>in;
    if(in<=1024 && in>=0)
    {
        mem->set(in1address, in);
    }
    
    return true;
}
