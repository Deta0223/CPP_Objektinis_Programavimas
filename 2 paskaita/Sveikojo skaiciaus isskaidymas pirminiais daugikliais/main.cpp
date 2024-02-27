#include "IntegerFactorization.hpp"
#include "../C++ multiset klase/multiset.hpp"
#include <iostream>

int main() {
    int number;
    std::cout << "Iveskite skaiciu: ";
    
    while (std::cin >> number) {
        IntegerFactorization ifact;
        ifact.setNumber(number);
        ifact.factorize();
        std::cout << ifact.toString() << std::endl;
        std::cout << "Iveskite skaiciu: ";
    }

    return 0;
}