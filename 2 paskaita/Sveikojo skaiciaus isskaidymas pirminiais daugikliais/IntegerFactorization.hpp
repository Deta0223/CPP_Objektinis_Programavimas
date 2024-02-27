#include <vector>
#include <string>
#include "../C++ multiset klase/multiset.hpp"
#include <set>

class IntegerFactorization {
public:
    void setNumber(int num) {
        number = num;
    }

    int getNumber() const {
        return number;
    }

    void factorize() {
        for (int i = 2; i <= number; i++) {
            while (number % i == 0) {
                factors.add(i);
                number /= i;
            }
        }
    }

    std::string toString() const {
        std::string result = "Numeris: " + std::to_string(number) + "\n";
        result += "Factorizacija: " + factors.toString();
        return result;
    }

private:
    int number;
    multiset factors;
};
