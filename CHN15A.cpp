//
// Created by PhantomCracker on 10/14/2020.
//

#include <iostream>

int wolverineMutation(int n, int k, int* minions) {
    int wolverineMinions = 0;
    for (int i = 0; i < n; i++) {
        if (!((minions[i] + k) % 7)) {
            wolverineMinions++;
        }
    }
    return wolverineMinions;
}

int main() {
    int T, N, K;
    std::cin >> T;
    while (T--) {
        std::cin >> N >> K;
        int minions[N];
        for (int i = 0; i < N; i++) {
            std::cin >> minions[i];
        }

        std::cout << wolverineMutation(N, K, minions) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}