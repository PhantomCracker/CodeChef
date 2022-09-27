//
// Created by PhantomCracker on 27.09.2022.
//

#include <iostream>

int minOperations(int numberOfCards, int cardsFaceUp) {
    int dif = numberOfCards - cardsFaceUp;
    return dif < cardsFaceUp ? dif : cardsFaceUp;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, X;
        std::cin >> N >> X;
        std::cout << minOperations(N, X) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}