//
// Created by PhantomCracker on 18-Feb-21.
//

#include <iostream>
#include <string>

std::string jellyBear(int A, int B) {
    int totalCandies = 0;

    while (A >= 0 && B >= 0) {
        totalCandies++;
        A = A - totalCandies;
        totalCandies++;
        B = B - totalCandies;
        if (A < 0) {
            return "Bob";
        } else if (B < 0) {
            return "Limak";
        }
    }
    return "Limak";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B;
        std::cin >> A >> B;
        std::cout << jellyBear(A, B) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}