#ifndef ETAPE3_HPP
#define ETAPE3_HPP

#include <string>
#include <algorithm>
#include <stdexcept>

std::string supprimerEspaces(std::string texte) {
    texte.erase(std::remove_if(texte.begin(), texte.end(), ::isspace), texte.end());
    return texte;
}

double additionDecimale(std::string texte) {
    int position = texte.find("+");
    std::string str_x = texte.substr(0, position);
    std::string str_y = texte.substr(position + 1);
    double x = std::stod(str_x);
    double y = std::stod(str_y);
    return x + y;
}

double soustractionDecimale(std::string texte) {
    int position = texte.find("-");
    std::string str_x = texte.substr(0, position);
    std::string str_y = texte.substr(position + 1);
    double x = std::stod(str_x);
    double y = std::stod(str_y);
    return x - y;
}

double multiplicationDecimale(std::string texte) {
    int position = texte.find("*");
    std::string str_x = texte.substr(0, position);
    std::string str_y = texte.substr(position + 1);
    double x = std::stod(str_x);
    double y = std::stod(str_y);
    return x * y;
}

double divisionDecimale(std::string texte) {
    int position = texte.find("/");
    std::string str_x = texte.substr(0, position);
    std::string str_y = texte.substr(position + 1);
    double x = std::stod(str_x);
    double y = std::stod(str_y);
    if (y == 0) {
        throw std::invalid_argument("Division par zéro.");
    } else {
        return x / y;
    }
}

#endif // ETAPE3_HPP
