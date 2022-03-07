//
// Created by PhantomCracker on 2/13/2021.
//

#include <iostream>

int numberOfMatches(long int A, long int B) {
    int matches = 0;
    long int sum = A + B;
    while (sum != 0) {
        int digit = sum % 10;
        sum = sum / 10;
        if (digit == 0 || digit == 6 || digit == 9) {
            matches = matches + 6;
        } else if (digit == 1) {
            matches = matches + 2;
        } else if (digit == 2 || digit == 3 || digit == 5) {
            matches = matches + 5;
        } else if (digit == 4) {
            matches = matches + 4;
        } else if (digit == 7) {
            matches = matches + 3;
        } else if (digit == 8) {
            matches = matches + 7;
        }
    }
    return matches;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        long int A, B;
        std::cin >> A >> B;
        std::cout << numberOfMatches(A, B) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}