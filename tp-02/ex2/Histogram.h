#pragma once

#include <iostream>

class Histogram {
    public:
        Histogram();
        Histogram(const Histogram&);
        ~Histogram();

        Histogram& operator=(const Histogram&);

        void analyze(const std::string&);
        void print() const;
    
        unsigned* _count = new unsigned[26] {};
    private:
};
