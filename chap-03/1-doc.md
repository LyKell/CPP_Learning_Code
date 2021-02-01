1. Complexité d'insertion dans une `std::map` : $\mathcal{O(\log n)}$
2. `push_back()` : Ajoute un élément à la fin -> `push_back(Person)` / `emplace_back()` : Construit l'élément à ajouter avec les paramètres passés -> `emplace_back(prénom, nom)`
3. ` empty()`
4. `size()` : Le nombre d'éléments actuellement présents / `capacity()` : Le nombre d'éléments que l'on peut insérer
5. `std::stack` : Permet de représenter une pile
6. Y en a pas.


Si vous essayez d’utiliser une variable pour indiquer la taille d’un std::array, vous aurez donc une erreur de compilation.
```cpp
int taille = 5;
std::array<int, taille> array;

int size;
std::cin >> size;
std::array<int, size> array2;
```