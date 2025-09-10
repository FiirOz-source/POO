# DOCUMENTATION

### Etapes pour build et lancer le programme :  
- Pour lancer un build, se déplacer dans le dossier de l'exemple : `cd ExampleX` avec `X` le numéro de l'exemple.
- Une fois dans le dossier de l'exemple, proceder au clean : `make clean`
- Build le projet : `make all`
- Executer le progeamme : `./programme`

### Créer sa branche de test et la modifier
#### Comment créer une branche
- Se déplacer dans la branche que l'on veut copier : `git switch branch_name` avec `branch_name`le nom de la branche
- Créer une branche : `git branch branch_name`  avec `branch_name`le nom de la branche à créer
- Se déplacer dans la branche nouvellement crée : `git switch branch_name` avec `branch_name`le nom de la branche

Voilà vous avez créé votre nouvelle branche en ayant copié la branche d'origine.

#### Modifications de base
- Copier un dossier exemple et le renommer (Ex: `Exemple1` et le renomer `Exemple2` ou autre nom genre `branche_timothee`).
- Videz le fichier `main.cpp` et le remplir de votre code, de même pour le fichier `lib.hpp`


# COURS
## Portabilité C -> Cpp

```
malloc/calloc = new
free = delete
```

## Exemples d'affectation

```cpp
int *tab;
int * b;
b = new int(2);   // alloue la mémoire d'un entier et attribue sa valeur(2)
tab = new int[5]; // alloue la mémoire d'un tableau de int de taille 5
delete b;         // de-alloue b
delete[]tab;      // de-alloue la mémoire de l'intégralité du tableau
```

## Références
```cpp
int *pi;      // Déclare un pointeur vers un entier (non initialisé pour l'instant)
int i = 3;    // Déclare un entier 'i' et l'initialise à 3
int &ri = i;  // Déclare une référence 'ri' qui devient un alias de 'i'
pi = &i;      // Le pointeur 'pi' contient maintenant l'adresse de 'i'
ri = 4;       // Change la valeur de 'i' à 4 via la référence 'ri'
```