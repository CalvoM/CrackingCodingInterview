//
// Created by d1r3ct0r on 22/07/2021.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "cracking.h"
#include "../includes/Llist.hpp"

TEST_CASE("Chapter One","Arrays and Strings"){
    REQUIRE(isUnique("aeiou")==true);
    REQUIRE(isUnique("baobab")==false);
    REQUIRE(oneAway("pale","ple")==true);
    REQUIRE(oneAway("pales","pale")==true);
    REQUIRE(oneAway("pale","bale")==true);
    REQUIRE(oneAway("bake","pale")==false);
    REQUIRE(compressString("aabcccddeeaaa")=="a2b1c3d2e2a3");
    REQUIRE(compressString("aabcccccaaa")=="a2b1c5a3");
}

TEST_CASE("Chapter Two","Linked List"){
    LList myList;
    const int elems = 12;
    for(int i=0;i<elems;i++){
        myList.append(i);
    }
    REQUIRE(myList.size() == elems);
}

