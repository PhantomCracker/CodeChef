//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>
#include <string>

std::string lowPhoneBattery(int phoneBattery) {
    if (phoneBattery <= 15) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X;
        std::cin >> X;
        std::cout << lowPhoneBattery(X) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}