# POO
Cours de 4A POO INSA Toulouse

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