#include <vector>
#include <string>

class multiset {
public:
    void add();
    void remove(int element);
    void toString(std::vector<std::string>& elementsString, std::vector<std::string>& countsString) const;
    int size();

private:
    std::vector<int> elements;
    std::vector<int> counts;
};
