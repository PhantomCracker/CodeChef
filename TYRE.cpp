//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>

int totalTyres(int bike, int car) {
    return bike * 2 + car * 4;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        std::cout << totalTyres(N, M) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}