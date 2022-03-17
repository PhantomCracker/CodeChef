//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>

int total(int ten, int five) {
    return ten * 10 + five * 5;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X, Y;
        std::cin >> X >> Y;
        std::cout << total(X, Y) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}