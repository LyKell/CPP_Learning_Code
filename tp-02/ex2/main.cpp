#include "Histogram.h"
#include <iostream>

using namespace std;

int main() {
    Histogram h1 ,h2;
    Histogram h3 {Histogram{h1}};
    
    return 0;
}
