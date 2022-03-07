//
// Created by PhantomCracker on 3/2/2021.
//

#include <iostream>

int max(int A, int B) {
    return A > B ? A : B;
}

int min(int A, int B) {
    return A < B ? A : B;
}

int integerDivision(int A, int B, int N) {
    return N % 2 == 0 ? (max(A, B) / min(A, B)) : (max(2 * A, B) / min(2 * A, B));
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B, N;
        std::cin >> A >> B >> N;
        std::cout << integerDivision(A, B, N) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}