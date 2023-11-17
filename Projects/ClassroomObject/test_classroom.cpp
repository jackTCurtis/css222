#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include "Classroom.cpp"
using namespace std;

TEST_CASE("Does the classroom constructor build an empty classrom when called") {
    Classroom myobj();
    CHECK(myobj.to_string() == "This is Classroom");
}