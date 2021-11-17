//
// Created by PhantomCracker on 17-Nov-21.
//

#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        if (N % 2 == 0 || M % 2 == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}