//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>

int notebooks(int kgOfPulp) {
    return kgOfPulp * 10;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::cout << notebooks(N) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}