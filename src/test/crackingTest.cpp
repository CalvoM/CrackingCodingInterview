//
// Created by d1r3ct0r on 22/07/2021.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "cracking.h"

TEST_CASE("Cracking the coding interview","[cracking]"){
    REQUIRE(isUnique("aeiou")==true);
    REQUIRE(isUnique("baobab")==false);
}

