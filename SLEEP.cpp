//
// Created by PhantomCracker on 26.09.2022.
//

#include <iostream>
#include <string>

std::string sleepDepravated(int sleepHours) {
    return sleepHours < 7 ? "YES" : "NO";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X;
        std::cin >> X;
        std::cout << sleepDepravated(X) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}