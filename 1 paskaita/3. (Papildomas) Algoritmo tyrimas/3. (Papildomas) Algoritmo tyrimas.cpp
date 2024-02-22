#include <iostream>
#include <vector>
#include <cstdlib> // rand() funkcijai
#include <chrono> // laiko matavimui

void rikiavimas(std::vector<int> &N);
void generavimas(std::vector<int> &N);

int main() {
    std::vector<int> N;
    generavimas(N);
    auto start = std::chrono::high_resolution_clock::now();
    rikiavimas(N);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Laikas: " << duration.count() <<  std::endl;
    /*
    for (int num : N)
        std::cout << num << " ";
    std::cout << std::endl;
    */

    return 0;
}

void generavimas(std::vector<int> &N) {
    int n;
    std::cout << "Iveskite elementu kieki: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
        N.push_back(rand());
}

void rikiavimas(std::vector<int> &N) {
    // Selection sort
    for (int i = 0; i < N.size(); i++) {
        int minElement = i;
        for (int j = i + 1; j < N.size(); j++) {
            if (N[minElement] > N[j]) {
                minElement = j;
            }
        }
        std::swap(N[i], N[minElement]);
    }
}
