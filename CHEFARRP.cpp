//
// Created by PhantomCracker on 2/11/2021.
//

#include <iostream>

int sumAndProductEqual(long long int* A, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        long long int sum = 0;
        long long int prod = 1;
        for (int j = i; j < N; j++) {
            sum = sum + A[j];
            prod = prod * A[j];
            if (sum == prod) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        long long int A[N];
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }
        std::cout << sumAndProductEqual(A, N) << std::endl;
    }
    std::cout << std::endl;

    return 0;
}