//
// Created by PhantomCracker on 1/25/2021.
//

#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, K;
        std::cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
            if (K - A[i] >= 0) {
                K = K - A[i];
                std::cout << "1";
            } else {
                std::cout << "0";
            }
        }
    }
    std::cout << std::endl;
    return 0;
}
