//calculatrice avec suppression d'espace et choix de la langue


#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include <iomanip>

int addition_decimale(std::stringstream& ss, int precision, std::string language) {
    double resultat, nombre;
    char operateur;
    ss >> resultat;
    ss >> std::noskipws >> operateur >> std::skipws;
    while (ss >> nombre >> std::noskipws >> operateur >> std::skipws) {
        if (operateur != '+') {
            throw std::invalid_argument("Opérateur invalide.");
        }
        resultat += nombre;
    }
    if (language == "en") {
        std::cout << "Result: " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    } else {
        std::cout << "Résultat : " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    }
    return std::round(resultat * std::pow(10, precision));
}

int soustraction_decimale(std::stringstream& ss, int precision, std::string language) {
    double resultat, nombre;
    char operateur;
    ss >> resultat;
    ss >> std::noskipws >> operateur >> std::skipws;
    while (ss >> nombre >> std::noskipws >> operateur >> std::skipws) {
        if (operateur != '-') {
            throw std::invalid_argument("Opérateur invalide.");
        }
        resultat -= nombre;
    }
    if (language == "en") {
        std::cout << "Result: " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    } else {
        std::cout << "Résultat : " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    }
    return std::round(resultat * std::pow(10, precision));
}

int division_decimale(std::stringstream& ss, int precision, std::string language) {
    double resultat, nombre;
    char operateur;
    ss >> resultat;
    ss >> std::noskipws >> operateur >> std::skipws;
    while (ss >> nombre >> std::noskipws >> operateur >> std::skipws) {
        if (operateur != '/') {
            throw std::invalid_argument("Opérateur invalide.");
        }
        if (nombre == 0) {
            throw std::invalid_argument("Division par zéro.");
        }
        resultat /= nombre;
    }
    if (language == "en") {
        std::cout << "Result: " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    } else {
        std::cout << "Résultat : " << std::fixed << std::setprecision(precision) << resultat << std::endl;
    }
    return std::round(resultat * std::pow(10, precision));
}

/**
 * Convertit un entier en chaîne de caractères en ajoutant les décimales.
 *
 * @param nombre L'entier à convertir.
 * @param precision Le nombre de décimales à ajouter.
 *
 * @return La chaîne de caractères représentant l'entier avec les décimales ajoutées.
 */
std::string str(int nombre, int precision) {
    std::ostringstream os;
    if (precision > 0) {
        if (nombre < 0) {
            os << "-";
            nombre = -nombre;
        }
        os << nombre / pow(10, precision);
        os << ".";
        int reste = nombre % static_cast<int>(pow(10, precision));
        if (reste < 0) {
            reste = -reste;
        }
        os << std::setfill('0') << std::setw(precision) << reste;
    } else {
        os << nombre;
    }
    return os.str();
}

int main(){
    return 0;
}