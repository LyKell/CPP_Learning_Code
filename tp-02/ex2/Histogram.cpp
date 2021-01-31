#include "Histogram.h"

Histogram::Histogram()
{
    std::cout << "Constructeur par défaut : " << this << std::endl;
}

Histogram::Histogram(const Histogram& other)
    : _count { other._count }
{
    std::cout << "Constructeur de copie : " << this << std::endl;
}

Histogram::~Histogram() {
    std::cout << "Destructeur : " << this << std::endl;
    delete[] _count;
}

Histogram& Histogram::operator=(const Histogram& other) {
    if (this != &other) {
        _count = other._count;
    }
    return *this;
}

void Histogram::analyze(const std::string& str) {
    for (const char &character : str) {
        if (islower(character)) {
            _count[character - 97]++;
        }
    }
}

void Histogram::print() const {
    for (auto i = 0; i < 26; i++) {
        if (_count[i] != 0) {
            char c = 'a' + i;
            std::cout << c << ": " << _count[i] << '\n';
        }
    }
    std::cout << std::endl;
}