#include <iostream>
using namespace std;

int main()
{
    int x, y, result;
    char op;

    cout << "Entrez un premier entier : ";
    cin >> x;

    cout << "Entrez un opérateur (+, *, / ou -) : ";
    cin >> op;

    cout << "Entrez un deuxième entier : ";
    cin >> y;

    switch (op) {
        case '+':
            result = x + y;
            cout << "La somme de " << x << " et " << y << " est " << result << endl;
            break;
        case '*':
            result = x * y;
            cout << "Le produit de " << x << " et " << y << " est " << result << endl;
            break;
        case '/':
            if (y == 0) {
                cout << "Erreur : division par zéro." << endl;
            } else {
                result = x / y;
                cout << "La division euclidienne de " << x << " par " << y << " est " << result << endl;
            }
            break;
        case '-':
            result = x - y;
            cout << "La différence de " << x << " et " << y << " est " << result << endl;
            break;
        default:
            cout << "Opérateur invalide." << endl;
            break;
    }

    return 0;
}
