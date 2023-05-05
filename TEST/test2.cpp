//Multiplication et soustraction d’entiers en mode normal.


#include "catch.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include "etape3.hpp"

using namespace std;

TEST_CASE("Multiplication et soustraction d'entiers en mode normal") {

    SECTION("Test de la multiplication d'entiers") {
        stringstream output;
        streambuf* old_cout = cout.rdbuf(output.rdbuf());

        string input = "12 * 3";
        istringstream iss(input);
        cin.rdbuf(iss.rdbuf());

        int result = multiplicationDecimale(input);
        cout.rdbuf(old_cout);
        REQUIRE(result == 36);
    }

    SECTION("Test de la soustraction d'entiers") {
        stringstream output;
        streambuf* old_cout = cout.rdbuf(output.rdbuf());

        string input = "8 - 5";
        istringstream iss(input);
        cin.rdbuf(iss.rdbuf());

        int result = soustractionDecimale(input);
        cout.rdbuf(old_cout);
        REQUIRE(result == 3);
    }
}
