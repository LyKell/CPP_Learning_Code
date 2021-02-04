#include <vector>
#include <iostream>


int main()
{
    std::vector<unsigned long> array;
    unsigned int size = 100000;

    for (unsigned int i = 2; i <= size; i++)
    {
        array.push_back(i);
    }

    for (unsigned int x = 2; x * x <= size; x++)
    {
        for (auto it = array.begin(); it != array.end();)
        {
            if (*it % x == 0 && *it != x)
            {
                it = array.erase(it);
            } else
            {
                it++;
            }
        }
    }

    // for (auto i = array.begin(); i != array.end(); i++)
    // {
    //     std::cout << *i << std::endl;
    // }
    
    std::cout << array.size() << std::endl;
}


