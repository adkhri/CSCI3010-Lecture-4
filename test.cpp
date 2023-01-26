#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Factorials are computed", "[factorial]") {
    REQUIRE( Factorial(0) == 1 ); // CHECK would allow the test to keep going. REQUIRE ends the tests after the first failure
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE ("Strings are split", "[split]") {
    std::vector<std::string> res;
    res.push_back("Hello");
    res.push_back("World");
    REQUIRE( Split("Hello|World", "|").at(0) == res.at(0));
}

TEST_CASE ("Divides out all even factors", "[RemoveTwos]") {
    REQUIRE( RemoveTwos(16) == 1);
    REQUIRE( RemoveTwos(13) == 13);
    REQUIRE( RemoveTwos(0) == 0);
    REQUIRE( RemoveTwos(2) == 1);
}

TEST_CASE ("Sums all elements", "[Sum]") {
    std::vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> empty = {};
    REQUIRE( Sum(test) == 55);
    REQUIRE( Sum(empty) == 0);
}

/* TEST_CASE("incrementing values in iteger vector", "[addN]") {
    std::vector<int> v{1,2,3,5,6,7,8,10};

    SECTION("CHECKING WITH +VE N"){}
} */