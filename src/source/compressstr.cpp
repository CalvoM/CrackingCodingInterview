#include "cracking.h"

std::string compressString(std::string str){
    uint16_t count=0;
    std::string finalStr;
    for(int i=0;i<str.size();i++){
        count++;
        if(i+1>=str.size() || str[i] != str[i+1]){
            finalStr+=str[i]+std::to_string(count);
            count=0;
        }
    }
    return finalStr<str?finalStr:str;
}