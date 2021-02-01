#include <set>
#include <unordered_set>
#include <map>
#include <iostream>
#include "keys.h"


int main()
{
    std::set<ComparableDog> comparableDogs;

    ComparableDog dog1 {"Tyranosaurus Rex", "Labrador"};
    comparableDogs.emplace(dog1);

    ComparableDog dog2 {"Carpe", "Golden"};
    comparableDogs.emplace(dog2);

    std::cout << comparableDogs.size() << std::endl;

    ComparableDog dog3 = dog1;
    comparableDogs.emplace(dog3);

    std::cout << comparableDogs.size() << std::endl;


    std::unordered_set<HashableDog> hashableDogs;

    HashableDog dog4 {"Intercalaire", "Cocogoat"};
    hashableDogs.emplace(dog4);

    HashableDog dog5 {"Cthulhu", "Escargot"};
    hashableDogs.emplace(dog5);

    ComparableDog dog6 {"Pâtes de riz sautées au boeuf", "Pizza"};

    using Owner = std::pair<std::string, std::string>;
    std::map<ComparableDog, Owner> owners_by_dog;

    owners_by_dog.insert({dog1, Owner {"John", "Cena"}});
    owners_by_dog.insert_or_assign(dog2, Owner {"Don", "Pablito"});
    owners_by_dog.emplace(dog3, Owner {"Surprised", "Pikachu"});
    owners_by_dog.try_emplace(dog6, "Ezio", "Auditore da Firenze");


    return 0;
}