//
// Created by PhantomCracker on 18.09.2022.
//

#include <iostream>
#include <string>

std::string nearestExit(int seat) {
    if (seat > 50) {
        return "RIGHT";
    }
    return "LEFT";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int seat;
        std::cin >> seat;
        std::cout << nearestExit(seat) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}