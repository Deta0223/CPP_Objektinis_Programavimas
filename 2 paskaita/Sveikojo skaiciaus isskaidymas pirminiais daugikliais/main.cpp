#include "multiset2.hpp"
#include "IntegerFactorization.hpp"
#include <iostream>

void multiset::add(int element) {
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

void multiset::toString(std::vector<std::string>& elementsString, std::vector<std::string>& countsString) const {
    for (int i = 0; i < elements.size(); i++) {
        elementsString.push_back(std::to_string(elements[i]));
        countsString.push_back(std::to_string(counts[i]));
    }
}
std :: string IntegerFactorization::toString() const {
        std::vector<std::string> elementsString;
        std::vector<std::string> countsString;
        factors.toString(elementsString, countsString);

        std::string result = std::to_string(number) + " = ";
        for (int i = 0; i < elementsString.size(); i++) {
            result += elementsString[i] + "^" + countsString[i] + " ";
        }
        return result;
    }
void IntegerFactorization::factorize()
{
        int n = number;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                factors.add(i);
                n /= i;
            }
        }
        if (n > 1) {
            factors.add(n);
        }
    }



int main() {
    int number;
    std::cout << "Iveskite skaiciu: ";
    std::cin >> number;

    IntegerFactorization ifact(number);
    std::cout << ifact.toString() << std::endl;
    std::cout << "Iveskite skaiciu: ";
    std::cin >> number;

    IntegerFactorization ifact(number);
    std::cout << ifact.toString() << std::endl;
    return 0;
}
