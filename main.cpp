//
// Created by d1r3ct0r on 11/07/2021.
//
#include "cracking.h"

int main(int argc, char **argv){
    std::string name="azsxdcfvg";
    if(isUnique(name))std::cout<<"Unique"<<std::endl;
    else std::cout<<"Not Unique"<<std::endl;
    std::cout<<urlify("Mr John Smith    ",13)<<std::endl;
    std::cout<<isPalindromePerm("Tilaco cat");
}

