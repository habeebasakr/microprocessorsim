//
//  main.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include <iostream>
#include "nSIM.hpp"
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> files {"test.txt", "test2.txt"};
    nSIM sims(files);
    sims.executeAll();
    sims.awaitThreads();
    
    // Print Memory to make sure execution was correct
    // Printing only first 20 memory locations
    cout << "-------------" << endl << "Memory" << endl << "-------------" << endl;
    for(int i = 0; i <= 30; i++){
        cout << "["<< i << "]:" ;
        sims.printAt(i);
        cout << endl;
    }
    cout << "ended" << endl;
    return 0;
}
