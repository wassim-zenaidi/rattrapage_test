//Addition et soustraction de décimaux en précision 4 en mode enfant français


#include <iostream>
#include <sstream>
#include <stdexcept>
#include "etape4.hpp"
#include "catch.hpp"

using namespace std;

TEST_CASE("Addition et soustraction de décimaux en précision 4 en mode enfant français") {
    SECTION("Addition de décimaux en précision 4") {
        std::string texte = "12.345 + 6.789";
        std::stringstream ss(texte);
        std::string output;
        std::ostringstream oss;
        oss.str(""); // Réinitialisation du flux

        int precision = 4;
        int result = addition_decimale(ss, precision, "fr");

        oss.str(""); // Réinitialisation du flux

        REQUIRE(result == 19'134);
        REQUIRE(output == "Résultat : 19.1339\n");
    }

    SECTION("Soustraction de décimaux en précision 4") {
        std::string texte = "12.345 - 6.789";
        std::stringstream ss(texte);
        std::string output;
        std::ostringstream oss;
        oss.str(""); // Réinitialisation du flux
        int precision = 4;
        int result = soustraction_decimale(ss, precision, "fr");
        oss.str(""); // Réinitialisation du flux
        REQUIRE(result == 5'556);
        REQUIRE(output == "Résultat : 5.5556\n");
    }

    SECTION("Opérateur invalide") {
        std::string texte = "12.345 * 6.789";
        std::stringstream ss(texte);
        std::string output;
        std::ostringstream oss;
        oss.str(""); // Réinitialisation du flux
        int precision = 4;
        try {
            int result = addition_decimale(ss, precision, "fr");
        } catch (std::invalid_argument& e) {
            output = std::string(e.what()) + "\n";
        }
        REQUIRE(output == "Opérateur invalide.\n");
    }

    SECTION("Division par zéro") {
        std::string texte = "12.345 / 0";
        std::stringstream ss(texte);
        std::string output;
        std::ostringstream oss;
        oss.str(""); // Réinitialisation du flux
        int precision = 4;
        try {
            int result = division_decimale(ss, precision, "fr");
        } catch (std::invalid_argument& e) {
            output = std::string(e.what()) + "\n";
        }
        REQUIRE(output == "Division par zéro.\n");
    }
}
