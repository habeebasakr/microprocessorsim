//
//  nSIM.cpp
//  nSIM Assignment
//
//  Created by Habeeba Sakr on 11/24/20.
//

#include "nSIM.hpp"


nSIM::nSIM(vector<string> paths){
    this->num_sims = (int)paths.size();
    this->sims = new SIM[this->num_sims];
    this->threads = new thread[this->num_sims];
    this->memory = new DataMemory();
    
    for(int i = 0; i < this->num_sims; i++){
        this->sims[i].read(paths[i]);
        this->sims[i].setDataMemory(this->memory);
    }
}

void nSIM::executeAll(){
    for(int i = 0; i < this->num_sims; i++){
        this->threads[i] = thread(SIM::execute, &sims[i]);
    }
}


void nSIM::awaitThreads(){
    for(int i = 0; i < this->num_sims; i++){
        this->threads[i].join();
    }
}
