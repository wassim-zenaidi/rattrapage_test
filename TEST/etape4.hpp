#ifndef ETAPE4_HPP
#define ETAPE4_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include <iomanip>

/**

Effectue l'addition décimale.
@param ss Le flux d'entrée contenant l'expression mathématique.
@param precision Le nombre de décimales à conserver.
@param language La langue à utiliser pour l'affichage du résultat.
@return Le résultat de l'addition décimale avec les décimales décalées.
@throw std::invalid_argument si l'opérateur est invalide.
*/
int addition_decimale(std::stringstream& ss, int precision, std::string language);
/**

Effectue la soustraction décimale.
@param ss Le flux d'entrée contenant l'expression mathématique.
@param precision Le nombre de décimales à conserver.
@param language La langue à utiliser pour l'affichage du résultat.
@return Le résultat de la soustraction décimale avec les décimales décalées.
@throw std::invalid_argument si l'opérateur est invalide.
*/
int soustraction_decimale(std::stringstream& ss, int precision, std::string language);
/**

Effectue la division décimale.
@param ss Le flux d'entrée contenant l'expression mathématique.
@param precision Le nombre de décimales à conserver.
@param language La langue à utiliser pour l'affichage du résultat.
@return Le résultat de la division décimale avec les décimales décalées.
@throw std::invalid_argument si l'opérateur est invalide ou si une division par zéro est effectuée.
*/
int division_decimale(std::stringstream& ss, int precision, std::string language);
/**

Convertit un entier en chaîne de caractères en ajoutant les décimales.
@param nombre L'entier à convertir.
@param precision Le nombre de décimales à ajouter.
@return La chaîne de caractères représentant l'entier avec les décimales ajoutées.
*/
std::string str(int nombre, int precision);
#endif // ETAPE4_HPP