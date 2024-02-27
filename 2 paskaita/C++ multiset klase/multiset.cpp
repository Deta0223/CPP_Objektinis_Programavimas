#include "multiset.hpp"
#include <iostream>

int main()
{
    multiset m;
    int element;
    std::cout << "Iveskite elementus (sustabdyti gavus raide): ";
    while (std::cin >> element)
    {
        m.add(element);
    }
    std::cout << m.toString();
    std::cout << std::endl;

    int elementToRemove;
    std::cout << "Iveskite elementa kuri norite istrinti (iveskite raide, jei norite baigti): ";

    while (std::cin >> elementToRemove)
    {
        if (m.size() != 0)
        {        
            m.remove(elementToRemove);
            std::cout << "Elementu kiekis: " << m.size() << std::endl;
            std::cout << m.toString() << std::endl;
        }
        else break;

        std::cout << "Iveskite elementa kuri norite istrinti (iveskite raide, jei norite baigti): ";
    }

    return 0;
}

