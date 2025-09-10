#include <iostream>
using namespace std;

int main()
{
    int *pi;     // Déclare un pointeur vers un entier (non initialisé pour l'instant)
    int i = 3;   // Déclare un entier 'i' et l'initialise à 3
    int &ri = i; // Déclare une référence 'ri' qui devient un alias de 'i'

    pi = &i; // Le pointeur 'pi' contient maintenant l'adresse de 'i'
    ri = 4;  // Change la valeur de 'i' à 4 via la référence 'ri'

    cout << "Valeur de i : " << i << endl;           // Affiche la valeur directe de i
    cout << "Valeur via pointeur : " << *pi << endl; // Affiche la valeur pointée par 'pi'
    cout << "Valeur via reference : " << ri << endl; // Affiche la valeur via la référence

    return 0;
}
