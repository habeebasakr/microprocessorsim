//
//  nSIM.hpp
//  nSIM Assignment
//
//  Created by Habeeba Sakr on 11/24/20.
//

#ifndef nSIM_hpp
#define nSIM_hpp

#include <stdio.h>
#include "DataMemory.hpp"
#include "SIM.hpp"
#include <string>
#include <thread>
#include <vector>


using namespace std;
class nSIM {

private:
    DataMemory* memory;
    SIM* sims;
    thread* threads;
    int num_sims;
    
public:
    nSIM(vector<string> paths);
    void executeAll();
    void awaitThreads();
    void printAt(int i){memory->printAt(i);}
    
};

#endif /* nSIM_hpp */
