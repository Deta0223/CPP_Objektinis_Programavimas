#include "multiset.hpp"
#include <iostream>
#include <limits>

void multiset::add() {
    int element;
    std::cout << "Iveskite elementus (sustabdyti gavus raide): ";
    while (std::cin >> element) {
        bool found = false;
        for (int i = 0; i < elements.size(); i++) {
            if (element == elements[i]) {
                counts[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            elements.push_back(element);
            counts.push_back(1);
        }
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

void multiset::toString(std::vector<std::string>& elementsString, std::vector<std::string>& countsString) const {
    for (int i = 0; i < elements.size(); i++) {
        elementsString.push_back(std::to_string(elements[i]));
        countsString.push_back(std::to_string(counts[i]));
    }
}

int multiset :: size()
{
    int sum = 0;
    for (int i = 0; i < counts.size(); i++)
    {
        sum += counts[i];
    }
    return sum;
}
void multiset::remove(int element) {
    for (int i = 0; i < elements.size(); i++) {
        if (elements[i] == element) {
            counts[i]--;
            if (counts[i] == 0) {
                elements.erase(elements.begin() + i);
                counts.erase(counts.begin() + i);
            }
            break;
        }
    }
}

int main() {
    multiset m;
    std::vector<std::string> elementsString;
    std::vector<std::string> countsString;

    m.add();
    m.toString(elementsString, countsString);

    for (int i = 0; i < elementsString.size(); i++) {
        std::cout << elementsString[i] << " - " << countsString[i] << ", ";
    }
    std::cout << std::endl;

    int elementToRemove;
    std::cout << "Iveskite elementa kuri norite istrinti (iveskite raide, jei norite baigti): ";

    while (std::cin >> elementToRemove)
    {
        m.remove(elementToRemove);
        elementsString.clear();
        countsString.clear();
        m.toString(elementsString, countsString);
        std :: cout << "Elementu kiekis: " << m.size() << std :: endl;
        for (int i = 0; i < elementsString.size(); i++)
            std::cout << elementsString[i] << " - " << countsString[i] << ", ";
            std :: cout << std :: endl;

        std::cout << "Iveskite elementa kuri norite istrinti (iveskite raide, jei norite baigti): ";
        std :: cout << std :: endl;


    }


    return 0;
}

