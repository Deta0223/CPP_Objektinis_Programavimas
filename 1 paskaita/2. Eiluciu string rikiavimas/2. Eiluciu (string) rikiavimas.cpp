#include <iostream>
#include <vector>
#include <string>
#include <fstream>
/*
using namespace std;

void rikiavimas(vector<string> &v);
void ivedimas(vector<string> &v);

int main() {
    vector<string> v;
    ivedimas(v);
    rikiavimas(v);
    for (string word : v)
        cout << word << " ";
    cout << endl;
    return 0;
}

void ivedimas(vector<string> &v) {
    string b;
    while (b != "-") {
        cin >> b;
        if (b != "-")
            v.push_back(b);
    }
}

void rikiavimas(vector<string> &v) {
    // Selection sort
    for (int i = 0; i < v.size(); i++) {
        int minElement = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[minElement] > v[j]) {
                minElement = j;
            }
        }
        swap(v[i], v[minElement]);
    }
}*/
//be using namespace
void rikiavimas(std::vector<std::string> &v);
void ivedimas(std::vector<std::string> &v);
void spausdinimas (std::vector<std::string> v);

int main() {
    std::vector<std::string> v;
    ivedimas(v);
    rikiavimas(v);
    spausdinimas(v);
    return 0;
}

void ivedimas(std::vector<std::string> &v) {
    std::string b;
    while (b != "-") {
        std::cin >> b;
        if (b != "-")
            v.push_back(b);
    }
}

void rikiavimas(std::vector<std::string> &v) {
    // Selection sort
    for (int i = 0; i < v.size(); i++) {
        int minElement = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[minElement] > v[j]) {
                minElement = j;
            }
        }
        std::swap(v[i], v[minElement]);
    }
}
void spausdinimas (std::vector<std::string> v)
{
        for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    //irasymas i faila
    std::ofstream ofs("out.txt");
    for (int i = 0; i < v.size(); i++)
        ofs << v[i] << " ";
    ofs << std::endl;
    //
}
