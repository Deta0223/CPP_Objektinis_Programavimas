#include <vector>
#include <string>
#include <iostream> 

class multiset {
private:
    std::vector<int> elements; 
    std::vector<int> counts;
    std::string answer;

public:
    void add(int element) {
        elements.push_back(element);
    }

    void processElements() {
        for (auto it = elements.begin(); it != elements.end(); ++it) {
            int element = *it;
            bool found = false;
            for (auto jt = elements.begin(); jt != it; ++jt) {
                if (element == *jt) {
                    counts[std::distance(elements.begin(), jt)]++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                counts.push_back(1);
            } else {
                elements.erase(it);
                counts.erase(counts.begin() + std::distance(elements.begin(), it));
                --it;
            }
        }
    }

        std::string toString() const {
            std::string result;
            for (int i = 0; i < elements.size(); i++) {
                result += std::to_string(elements[i]) + " (" + std::to_string(counts[i]) + ") ";
            }
            return result;
        }

        int size()
        {
            int sum = 0;
            for (int i = 0; i < counts.size(); i++)
            {
                sum += counts[i];
            }
            return sum;
        } 

        void remove(int element)
        {
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
        }; 
