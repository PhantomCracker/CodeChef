//
// Created by PhantomCracker on 26.09.2022.
//

#include <iostream>

int numberOfPairs(int n) {
    int countPairs = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            if (i + j == n) {
                if (i != j) {
                    countPairs++;
                }
                countPairs++;
            }
        }
    }
    return countPairs;
}

int main() {
    int N;
    std::cin >> N;
    std::cout << numberOfPairs(N);

    std::cout << std::endl;
    return 0;
}