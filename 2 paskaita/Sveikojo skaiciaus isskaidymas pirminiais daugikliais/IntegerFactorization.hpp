#include <vector>
#include <string>
class IntegerFactorization {
public:
    IntegerFactorization(int number) : number(number)
    {
        factorize();
    }
    std :: string toString() const;
    void factorize();

private:
    int number;
    multiset factors;
};
