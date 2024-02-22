#include <vector>
#include <string>

class multiset {
public:
    void add(int element);
    void remove(int element);
    void toString(std::vector<std::string>& elementsString, std::vector<std::string>& countsString) const;

private:
    std::vector<int> elements;
    std::vector<int> counts;
};
