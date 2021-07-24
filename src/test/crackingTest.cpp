//
// Created by d1r3ct0r on 22/07/2021.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "cracking.h"

TEST_CASE("Cracking the coding interview","[cracking]"){
    REQUIRE(isUnique("aeiou")==true);
    REQUIRE(isUnique("baobab")==false);
    REQUIRE(oneAway("pale","ple")==true);
    REQUIRE(oneAway("pales","pale")==true);
    REQUIRE(oneAway("pale","bale")==true);
    REQUIRE(oneAway("bake","pale")==false);
    REQUIRE(compressString("aabcccddeeaaa")=="a2b1c3d2e2a3");
    REQUIRE(compressString("aabcccccaaa")=="a2b1c5a3");
}

