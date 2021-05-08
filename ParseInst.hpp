//
//  ParseInst.hpp
//  SIM
//
//  Created by Habeeba Sakr on 11/11/20.
//  Copyright © 2020 Habeeba Sakr. All rights reserved.
//

#ifndef ParseInst_hpp
#define ParseInst_hpp

#include <stdio.h>
#include <string>
#include "Instruction.hpp"

using namespace std;
class ParseInst {

public:
    Instruction* parsing(string inst);
};


#endif /* ParseInst_hpp */
