//
// Created by PhantomCracker on 17.09.2022.
//

#include <iostream>
#include <string>

std::string refereeDecision(int* inOrOut) {
    for (int i = 0; i < 4; i++) {
        if (inOrOut[i] != 0) {
            return "OUT";
        }
    }
    return "IN";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int r[4];
        for (int i = 0; i < 4; i++) {
            std::cin >> r[i];
        }
        std::cout << refereeDecision(r) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}