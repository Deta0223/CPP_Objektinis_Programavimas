#include <iostream>
#include <vector>
#include <fstream>
#include <string>


struct multiset {
    std::vector<int> elements;
    std::vector<int> counts;
};
struct multisetString {
    std::vector<std::string> elements;
    std::vector<std::string> counts;
};
void multiset_add(multiset &m);
void multiset_toString(multiset m, multisetString &ms);

int main() {
    multiset m;
    multisetString ms;
    multiset_add(m);
    multiset_toString(m, ms);
    for (int i = 0; i < ms.elements.size(); i++)
    {
        std::cout << ms.elements[i] << " - ";
        std::cout << ms.counts[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}

void multiset_add(multiset &m) {
    int element;
    std::ifstream in("duom.txt");
    while (in >> element) {
        bool found = false;
        for (int j = 0; j < m.elements.size(); j++)
            {
            if (element == m.elements[j]) {
                m.counts[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            m.elements.push_back(element);
            m.counts.push_back(1);
        }
    }
    in.close();
}
void multiset_toString(multiset m, multisetString &ms)
{
    for (int i = 0; i < m.elements.size(); i++)
    {
        ms.elements.push_back(std::to_string(m.elements[i]));
        ms.counts.push_back(std::to_string(m.counts[i]));
    }
}
