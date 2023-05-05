//calculatrice avec suppression d'espace

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string supprimerEspaces(string texte) {
    texte.erase(remove_if(texte.begin(), texte.end(), ::isspace), texte.end());
    return texte;
}

double additionDecimale(string texte) {
    int position = texte.find("+");
    string str_x = texte.substr(0, position);
    string str_y = texte.substr(position + 1);
    double x = stod(str_x);
    double y = stod(str_y);
    return x + y;
}

double soustractionDecimale(string texte) {
    int position = texte.find("-");
    string str_x = texte.substr(0, position);
    string str_y = texte.substr(position + 1);
    double x = stod(str_x);
    double y = stod(str_y);
    return x - y;
}

double multiplicationDecimale(string texte) {
    int position = texte.find("*");
    string str_x = texte.substr(0, position);
    string str_y = texte.substr(position + 1);
    double x = stod(str_x);
    double y = stod(str_y);
    return x * y;
}

double divisionDecimale(string texte) {
    int position = texte.find("/");
    string str_x = texte.substr(0, position);
    string str_y = texte.substr(position + 1);
    double x = stod(str_x);
    double y = stod(str_y);
    if (y == 0) {
        throw invalid_argument("Division par zéro.");
    } else {
        return x / y;
    }
}

int main()
{
    string texte;
    char op;
    int precision;

    cout << "Bienvenue dans la calculatrice en mode enfant (décimale) !" << endl;
    cout << "Veuillez entrer une opération décimale : ";
    getline(cin, texte);
    texte = supprimerEspaces(texte);

    try {
        if (texte.find("+") != string::npos) {
            cout << "Résultat : ";
            cout << fixed << setprecision(precision) << additionDecimale(texte) << endl;
        } else if (texte.find("-") != string::npos) {
            cout << "Résultat : ";
            cout << fixed << setprecision(precision) << soustractionDecimale(texte) << endl;
        } else if (texte.find("*") != string::npos) {
            cout << "Résultat : ";
            cout << fixed << setprecision(precision) << multiplicationDecimale(texte) << endl;
        } else if (texte.find("/") != string::npos) {
            cout << "Résultat : ";
            cout << fixed << setprecision(precision) << divisionDecimale(texte) << endl;
        } else {
            cout << "Opérateur invalide." << endl;
        }
    } catch (invalid_argument &e) {
        cerr << e.what() << endl;
    }

    return 0;
}
