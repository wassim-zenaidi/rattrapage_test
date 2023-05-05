#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y, result;
    char op;
    int precision;

    cout << "Entrez un premier décimal : ";
    cin >> x;

    cout << "Entrez un opérateur (+, *, / ou -) : ";
    cin >> op;

    cout << "Entrez un deuxième décimal : ";
    cin >> y;

    cout << "Entrez la précision souhaitée : ";
    cin >> precision;

    switch (op) {
        case '+':
            result = x + y;
            cout << fixed << setprecision(precision) << "La somme de " << x << " et " << y << " est " << result << endl;
            break;
        case '*':
            result = x * y;
            cout << fixed << setprecision(precision) << "Le produit de " << x << " et " << y << " est " << result << endl;
            break;
        case '/':
            if (y == 0) {
                cout << "Erreur : division par zéro." << endl;
            } else {
                result = x / y;
                cout << fixed << setprecision(precision) << "La division réelle de " << x << " par " << y << " est " << result << endl;
            }
            break;
        case '-':
            result = x - y;
            cout << fixed << setprecision(precision) << "La différence de " << x << " et " << y << " est " << result << endl;
            break;
        default:
            cout << "Opérateur invalide." << endl;
            break;
    }

    return 0;
}
