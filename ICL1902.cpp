//
// Created by PhantomCracker on 3/9/2021.
//

#include <iostream>
#include <cmath>

int numberOfSquares(int N) {
    int squares = 0;
    while (N) {
        int radical =  std::floor(sqrt((N)));
        N = N - (pow(radical, 2));
        squares++;
    }
    return squares;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::cout << numberOfSquares(N) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}