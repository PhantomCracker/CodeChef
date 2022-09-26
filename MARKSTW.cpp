//
// Created by PhantomCracker on 26.09.2022.
//

#include <iostream>
#include <string>

std::string aliceIsHappy(int aliceScore, int bobScore) {
    return aliceScore >= bobScore * 2 ? "YES" : "NO";
}

int main() {
    int X, Y;
    std::cin >> X >> Y;
    std::cout << aliceIsHappy(X, Y);

    std::cout << std::endl;
    return 0;
}