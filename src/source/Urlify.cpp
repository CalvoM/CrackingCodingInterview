//
// Created by d1r3ct0r on 15/07/2021.
//

#include "../includes/cracking.h"

std::string urlify(std::string originalStr, int trueLen){
    //find the space count
    int spaceCnt=0;
    for(int k=0;k<trueLen;k++){
        if(originalStr[k]==' ')spaceCnt++;
    }
    int newIndex = trueLen + spaceCnt*2;
    for(int i = trueLen-1;i>=0;i--){
        if(originalStr[i] == ' '){
            originalStr[newIndex-1] = '0';
            originalStr[newIndex-2] = '2';
            originalStr[newIndex-3] = '%';
            newIndex -=3;
        }else{
            originalStr[newIndex-1] = originalStr[i];
            newIndex--;
        }
    }
    return originalStr;
}

