//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>
#include <string>

std::string itsNibble(int bits) {
    return bits % 4 == 0 ? "Good" : "Not good";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::cout << itsNibble(N) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}