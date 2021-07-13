//
// Created by d1r3ct0r on 11/07/2021.
//
#include "cracking.h"
#include <unordered_map>
#include <bitset>

bool isUniqueHash(std::string data){
    std::unordered_map<int,int> hash;
    for(auto c:data){
        int c_ = tolower(c);
        if(hash.find(c_)==hash.end()){
            hash[c_] = 1;
        }else return false;
    }
    return true;
}
bool isUniqueVec(std::string data){
    std::bitset<26> vecData;
    for(auto c:data){
        int c_ = tolower(c)-tolower('A');
        if(vecData[c_])return false;
        vecData.set(c_);
    }
    return true;
}

bool isUnique(std::string data){
    return isUniqueVec(data);
    return isUniqueHash(data);
    for(int o=0;o<data.size();o++){
        auto s = tolower(data[o]);
        for(int i=0;i<data.size();i++){
            auto si = tolower(data[i]);
            if(i==o)continue;
            if(si == s){
                return false;
            }
        }
    }
    return true;
}