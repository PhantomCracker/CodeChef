//
// Created by PhantomCracker on 1/25/2021.
//

#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        long int K;
        std::cin >> N >> K;
        long int A[N];
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
            if (K - A[i] >= 0) {
                std::cout << "1";
                K = K - A[i];
            } else {
                std::cout << "0";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
