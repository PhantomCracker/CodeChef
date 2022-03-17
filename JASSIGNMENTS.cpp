//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>
#include <string>

std::string haveTime(int startingHour) {
    return startingHour <= 7 ? "Yes" : "No";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X;
        std::cin >> X;
        std::cout << haveTime(X) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}