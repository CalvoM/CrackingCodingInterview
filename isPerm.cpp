//
// Created by d1r3ct0r on 12/07/2021.
//

#include "cracking.h"
#include <bitset>
bool isPerm(std::string original, std::string sub){
    std::bitset<128>originalSet;
    std::bitset<128>permSet;
    for(auto o:original){
        originalSet.set(tolower(o));
    }
    for(auto s: sub){
        if(originalSet[tolower(s)] == false) return false;
    }
    return true;
}