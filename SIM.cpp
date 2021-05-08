//
//  SIM.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/13/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "SIM.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "ParseInst.hpp"
using namespace std;
SIM::SIM(){
    for (int i=0; i<1025; i++)
    {
       
        instmemory[i]=NULL;
    }
    
}
void SIM::execute(SIM* s){
    s->PC = 0;
    while(true){
        Instruction *nextinst = s->instmemory[s->PC];
        if(nextinst == NULL) return;
        s->PC++;
        if(nextinst-> execute(s->PC, s->memory)==false)
            return;

    }
}

void   SIM::read(string filename){
      ifstream inFile;
      inFile.open(filename);
       string read;
      
      if (!inFile) {
          inFile.close();
          cout << "can't open file " << filename <<endl;
          return;
        }
            ParseInst parser;
      
      int counter = 0;

      while (getline (inFile, read)){
          
          cout<< read << endl;
          instmemory[counter] = parser.parsing(read);
          counter++;
          
      }
      
      inFile.close();
      
    
}
