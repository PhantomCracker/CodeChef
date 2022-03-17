//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>

int moneyBack(int worth) {
    return 100 - worth;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X;
        std::cin >> X;
        std::cout << moneyBack(X) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}