// Implement the program here.
#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string word;

    // while (true) {
    //     std::cin >> number;
    //     std::cout << "Craow " << number << "!" << std::endl;

    //     if (number == -1) {
    //         break;
    //     }
    // }

    // do {
    //     std::cin >> number;
    //     std::cout << "Craow " << number << "!" << std::endl;

    // } while (number != -1);

    for (int i = 0; i < 10; i++) {
        cin >> word;
        cout << "Craow " << word << "!" << endl;
    }

    return 0;
}