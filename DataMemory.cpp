//
//  DataMemory.cpp
//  nSIM Assignment
//
//  Created by Habeeba Sakr on 11/24/20.
//

#include "DataMemory.hpp"


DataMemory::DataMemory(){
    for(int i = 0; i < 1024; i++)
        memory[i] = 0;
}
void DataMemory::set(int i, int v){
    lock_guard<mutex> guard(locks[i]);
    memory[i] = v;
}
int DataMemory::get(int i){
    lock_guard<mutex> guard(locks[i]);
    return memory[i];
}
