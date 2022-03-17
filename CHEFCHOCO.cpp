//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>

int minimumMoney(int chocolatesBotswal, int chocolatesChef, int cost) {
    int chocolatesNeeded = chocolatesBotswal - chocolatesChef;
    return  chocolatesNeeded * cost;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int C, X, Y;
        std::cin >> C >> X >> Y;
        std::cout << minimumMoney(C, X, Y) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}