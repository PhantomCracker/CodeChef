//
// Created by PhantomCracker on 18.09.2022.
//

#include <iostream>

int accountBalance(int currentBalance, int depositAmount, int bankFee, int months) {
    return currentBalance + months * (depositAmount - bankFee);
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int W, X, Y, Z;
        std::cin >> W >> X >> Y >> Z;
        std::cout << accountBalance(W, X, Y, Z) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
