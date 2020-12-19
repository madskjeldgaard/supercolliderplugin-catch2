#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // once
#include "SC_Constants.h"
#include "SomeHeader.hpp"
#include "catch2/catch.hpp"

// A silly test to see if the plugin's pi is equivalent to M_PI
TEST_CASE("See if Pi is okay", "[pi check]") { REQUIRE(pi == M_PI); }

// Another silly test demonstrating plugins/SomeHeader.hpp
TEST_CASE("See if the twentyTwo method returns 22", "[twentytwo]") {
  SomeHeader::SomeHeader sh;
  int num = sh.twentyTwo();
  REQUIRE(num == 22);
}
