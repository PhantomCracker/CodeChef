//
// Created by Vlad.Popa on 17-Mar-22.
//

#include <iostream>

int maxAmountOfWater(int k, int x) {
    return k - x;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int K, X;
        std::cin >> K >> X;
        std::cout << maxAmountOfWater(K, X) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}