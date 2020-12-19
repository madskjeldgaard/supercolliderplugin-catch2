#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // once
#include "SC_Constants.h"
#include "catch2/catch.hpp"
//
// A silly test to see if the plugin's pi is equivalent to M_PI
TEST_CASE("See if Pi is okay", "[pi check]") { REQUIRE(pi == M_PI); }
