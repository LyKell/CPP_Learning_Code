# TP1 - C++

## Exercice 1 - Compilation et exécution

1. Le programme est plus rapide et directement exécutable par le système d'exploitation. Par contre, l'exécutable n'est pas portable, et il faut recompiler les sources à chaque fois que l'on change de système.

2. Les erreurs de compilation sont générées pendant la compilation. Elles empêchent le compilateur de créer l'exécutable. Ce sont dont des erreurs qui nous empêchent d'exécuter le programme. Elles sont indiquées par le compilateur.
Les erreurs d'exécution sont celles générées par l'utilisateur ou par un mauvais comportement du programme lors de l'exécution (L'utilisateur qui fait 5 + "bonjour" ou quand on a oublié de gérer un pointeur null dans le code)

3. 


## Exercice 2 -- Primitives et initialisation

1.
```cpp
/* Sans -Werror */
bool b3{i1};    // On ne peut pas initialiser une booléen avec 2. Il faut remplacer i1 par un booléen, 0 ou 1.
char c8{"a"};   // "a" est un const char*, par un char. On corrige en mettant des single quotes.
double d10{i1};
double* d11{d10};   // d10 n'est pas un double*
double& d12;
int* i16 = &b2; // On essaye de mettre un bool* dans un int*
int& i18{i14};
const bool b20; // On n'a pas initialisé b20 alors qu'elle est délcarée const
```

```cpp
/* Avec -Werror */
// On a les même
```

2. s0 : Non, s0 est initialisé avec une valeur aléatoire
*i15 : 2
ul7 : Le code ne compile pas


## Exercice 3 - Les fonctions et leurs paramètres

Voir tp1.cpp

2. Par valeur : C'est une copie de la valeur qui est passée. Généralement, on l'utilise pour les types primitifs.
Par référence : C'est un pointeur sur l'adresse du paramètre. On peut donc le modifier. Pour les objet, c'est plus léger de les passer par référence que par valeur. On l'utilise quand on souhaite modifier la valeur du paramètre.
Par référence constante : Comme par référence, sauf qu'on peut pas modifier la valeur. On l'utilise quand on veut passer un objet en paramètre mais sans vouloir le modifier.