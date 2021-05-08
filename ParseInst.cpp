//
//  ParseInst.cpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#include "ParseInst.hpp"
#include "Instruction.hpp"
#include "ADD.hpp"
#include "MUL.hpp"
#include "LE.hpp"
#include "NEG.hpp"
#include "ASS.hpp"
#include "JMP.hpp"
#include "JMP0.hpp"
#include "READ.hpp"
#include "WRITE.hpp"
#include "HALT.hpp"
#include<iostream>
using namespace std;
#include <string>




Instruction* ParseInst::parsing(string inst)
{
    
    Instruction * instt=NULL;
    string op;
    string in1;
    string in2;
    string out;
    string a1;
    int outt;
    int in1addr=0;
    int a11=0;
    int in2addr=0;
    int in1const=0;
    int in2const=0;
    bool in1isAddr=false;
    bool in2isAddr=false;
    op=inst.substr(0, inst.find(" "));
    string modifiedinst;
    if(op != inst)
        modifiedinst=inst.substr(op.length()+1);
    
    if (op=="ADD")
    {
        
        
        
        in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
        if(in1.at(0) == '$'){
            in1isAddr = true;
            in1addr = stoi(in1.substr(1));
        }else{
            in1isAddr = false;
            in1const = stoi(in1);
        }
        
        modifiedinst = modifiedinst.substr(in1.length()+1, modifiedinst.length());
        in2 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
               if(in2.at(0) == '$'){
                   in2isAddr = true;
                   in2addr = stoi(in2.substr(1));
               }else{
                   in2isAddr = false;
                   in2const = stoi(in2);
               }
        out = modifiedinst.substr(in2.length()+2, modifiedinst.length());
        outt=stoi(out);
        instt = new ADD(in1const,  in1addr,  in2const,  in2addr,  outt,  in1isAddr,  in2isAddr);
    }else if (op=="MUL")
    {
      
            in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
            if(in1.at(0) == '$'){
                in1isAddr = true;
                in1addr = stoi(in1.substr(1));
            }else{
                in1isAddr = false;
                in1const = stoi(in1);
            }
            
            modifiedinst = modifiedinst.substr(in1.length()+1, modifiedinst.length());
            in2 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
                   if(in2.at(0) == '$'){
                       in2isAddr = true;
                       in2addr = stoi(in2.substr(1));
                   }else{
                       in2isAddr = false;
                       in2const = stoi(in2);
                   }
            out = modifiedinst.substr(in2.length()+2, modifiedinst.length());
            outt=stoi(out);
            instt = new MUL(in1const,  in1addr,  in2const,  in2addr,  outt,  in1isAddr,  in2isAddr);

    }else if (op=="NEG")
    {
        in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
                         if(in1.at(0) == '$'){
                             in1isAddr = true;
                             in1addr = stoi(in1.substr(1));
                         }else{
                             in1isAddr = false;
                             in1const = stoi(in1);
                         }
                         
                         
                    out = modifiedinst.substr(in1.length()+2, modifiedinst.length());

                        outt=stoi(out);
                instt = new NEG (in1const,  in1addr,   outt,  in1isAddr);

        
    }else if (op=="LE")
    {
              
                  in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
                  if(in1.at(0) == '$'){
                      in1isAddr = true;
                      in1addr = stoi(in1.substr(1));
                  }else{
                      in1isAddr = false;
                      in1const = stoi(in1);
                  }
                  
                  modifiedinst = modifiedinst.substr(in1.length()+1, modifiedinst.length());
                  in2 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
                         if(in2.at(0) == '$'){
                             in2isAddr = true;
                             in2addr = stoi(in2.substr(1));
                         }else{
                             in2isAddr = false;
                             in2const = stoi(in2);
                         }
                  out = modifiedinst.substr(in2.length()+2, modifiedinst.length());
                  outt=stoi(out);
                  instt = new LE(in1const,  in1addr,  in2const,  in2addr,  outt,  in1isAddr,  in2isAddr);
        
    }else if (op=="JMP")
    {
        in1 = modifiedinst.substr(0, modifiedinst.length());
        in1addr = stoi(in1.substr(1));
        instt = new JMP(in1addr);

        
    }else if (op=="JMP0")
    {
        
        in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));

         if(in1.at(0) == '$'){
                     in1isAddr = true;
                     in1addr = stoi(in1.substr(1));
                 }else{
                     in1isAddr = false;
                     in1const = stoi(in1);
                 }
                 
                
            a1 = modifiedinst.substr(in1.length()+2, modifiedinst.length());

            a11=stoi(a1);
            instt = new JMP0 (in1addr, in1const,   a11,  in1isAddr);
        
        
    }else if (op=="ASS")
    {
        in1 = modifiedinst.substr(0, modifiedinst.find_first_of(','));
                               if(in1.at(0) == '$'){
                                   in1isAddr = true;
                                   in1addr = stoi(in1.substr(1));
                               }else{
                                   in1isAddr = false;
                                   in1const = stoi(in1);
                               }
                               
                              
                          out = modifiedinst.substr(in1.length()+2, modifiedinst.length());

                              outt=stoi(out);
                      instt = new ASS (in1const,  in1addr,   outt,  in1isAddr);

    }else if (op=="READ")
    {
        in1 = modifiedinst.substr(0, modifiedinst.length());
        in1addr = stoi(in1.substr(1));
        instt = new READ(in1addr);

    }else if (op=="WRITE")
    {   in1 = modifiedinst.substr(0, modifiedinst.length());
        if(in1.at(0) == '$'){
            in1isAddr = true;
            in1addr = stoi(in1.substr(1));
        }else{
            in1isAddr = false;
            in1const = stoi(in1);
        }
        instt = new WRITE(in1const,in1addr,in1isAddr);

        
    }else if (op=="HALT")
    {
        instt = new HALT();

    } else {cout<<"error"<<endl;}
    
    return instt;
    
}
