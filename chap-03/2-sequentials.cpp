#include <list>
#include <array>
#include <iostream>
#include <iterator>
#include <vector>
#include <stack>

enum Fruit
{
    Abricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruits;
    fruits[Abricot] = "Abricot";
    fruits[Cherry] = "Cherry";
    fruits[Mango] = "Mango";
    fruits[Raspberry] = "Raspberry";

}

std::ostream &operator<<(std::ostream &ostr, const std::list<int> &list)
{
    for (auto &i : list)
    {
        ostr << " " << i;
    }
    return ostr;
}

void try_lists()
{
    std::list<int> l1(5, 5);
    std::list<int> l2 {0, 1, 2, 3, 4, 5};
    std::list<int> l3(l1);
    std::list<int> l4;
    l4.emplace_front(9);
    l4.emplace_front(6);
    l4.emplace_front(8);

    l1.sort();
    l2.sort();
    l1.merge(l2);

    l3.splice(l3.begin(), l4);
    l3.sort();

    std::cout << l1 << std::endl;
    std::cout << l3 << std::endl;

    auto middle = l1.begin();
    std::advance(middle, l1.size() / 2);
    l1.splice(middle, l3);

}

void try_stacks()
{
    std::stack<int, std::vector<int>> stack;
    stack.push(0);
    stack.push(1);
    stack.push(2);

    // for (size_t i = 0; i < stack.size(); i++)
    // {
    //     std::cout << stack[i] << std::endl;
    // }
    
    // for (const auto i : stack)
    // {
        
    // }
    
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}