//
// Created by d1r3ct0r on 20/07/2021.
//

#include "cracking.h"
#include <map>
#include <string>

bool isPalindromePerm(std::string sentence){

    std::map<char, int> charMap;
    for(char c: sentence){
        c = std::tolower(c);
        if(c>='a' && c<='z')charMap[c]++;
    }
    bool oddFound=false;
    for(auto m: charMap){
        if(m.second%2==1){
            if(!oddFound) oddFound = true;
            else return false;
        }
    }
    return true;

}
