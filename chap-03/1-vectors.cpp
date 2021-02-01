#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

int main()
{
    // std::vector<int> vec(4, 0);

    int table[] = {0, 1, 2, 3, 4, 5};

    std::vector<int> vec(&table[2], &table[5]);
    // for (const auto i : vec)
    // {
    //     std::cout << i << std::endl;
    // }

    std::vector<int> full(table, table + 6);
    // for (const auto i : full)
    // {
    //     std::cout << i << std::endl;
    // }
    
    // for (size_t left = 0, right = full.size() - 1; left < right; left++, right--)
    // {
    //     std::swap(full[left], full[right]);
    // }
    
    // for (const auto i : full)
    // {
    //     std::cout << i << std::endl;
    // }
    
    // for (auto it = full.begin(); it != full.end(); it += 2)
    // {
    //     it = full.insert(it, *it);
    // }
    
    // while (!full.empty()) {
    //     full.pop_back();
    // }

    std::vector<int> v {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // v.erase(v.begin() + 2, v.end() + 7);


    // const auto elem = std::find(v.begin(), v.end(), 9);
    // if (elem != v.end())
    // {
    //     v.erase(elem);
    // }

    v.assign(5, 2);
    v.assign({0, 2, 32, -4, 3});
    v.clear();

    return 0;
}

/*
std::vector<int> vec {4, 0}; -> 4 0 : Constructeur 3
std::vector<int> vec(4, 0); -> 0 0 0 0 : Constructeur 10

insert : Ajoute un élément à une certaine pos
emplace : Construit puis ajoute un élément à une certaine pos

pop_back
*/