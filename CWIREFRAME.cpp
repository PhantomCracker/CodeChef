//
// Created by PhantomCracker on 18.09.2022.
//

#include <iostream>

int rupesNeeded(int N, int M, int X) {
    return (2 * N + 2 * M) * X;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M, X;
        std::cin >> N >> M >> X;
        std::cout << rupesNeeded(N, M, X) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
