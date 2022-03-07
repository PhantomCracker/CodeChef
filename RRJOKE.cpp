//
// Created by PhantomCracker on 05.03.2021
//

#include <iostream>

int goodJoke(int N) {
    int minDistance = 1;
    for (int i = 2; i <= N; i++) {
        minDistance = minDistance ^ i;
    }
    return minDistance;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        int px[N], py[N];
        for (int i = 0; i < N; i++) {
            std::cin >> px[i] >> py[i];
        }
        std::cout << goodJoke(N) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}