#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cerr << "Not enough arguments" << std::endl;
        return -1;
    }

    int length = std::stoi(argv[1]);
    std::cout << "Length: " << length << std::endl;

    // int* array = new int[length] {};

    std::vector<int> array;

    for (int i = 0; i < length; i++) {
        // array[i] = i + 1;
        array.emplace_back(i + 1);
    }

    // for (int i = 0; i < 4; ++i)
    // for (int i = 0; i < length; i++)
    for (int value : array)
    {
        std::cout << value << std::endl;
    }

    // delete[] array;

    return 0;
}
