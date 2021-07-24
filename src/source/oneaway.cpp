#include "cracking.h"

bool oneAway(std::string first, std::string second){
    std::string longer = second.size()>first.size()?second:first;
    std::string shorter = second.size()>first.size()?first:second;
    int li,si;
    li=0;
    si=0;
    bool diffFound=false;
    while(li<longer.size() && si<shorter.size()){
        if(longer[li] != shorter[si]){
            if(diffFound) return false;
            else{
                diffFound = true;
                if(longer.size() == shorter.size()) si++;
            }
        }else{
            si++;
        }
        li++;
    }
    return true;
}