//
// Created by PhantomCracker on 10/16/2020.
//

#include <iostream>

void alternatingSubarray(int n, long int *A) {
    int current_index = 0, last_index = 0;
    bool current_positive = A[0] < 0;
    while (last_index < n) {
        if (A[last_index] > 0 == current_positive) {
            while (current_index < last_index) {
                std::cout << last_index - current_index << " ";
                current_index++;
            }

        } else {
            current_positive = A[last_index] > 0;
        }
        last_index++;
    }
    while (current_index < last_index) {
        std::cout << last_index - current_index << " ";
        current_index++;
    }
    std::cout << std::endl;
}

int main() {
    int T, N;
    std::cin >> T;

    while (T--) {
        std::cin >> N;
        long int A[N];

        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }

        alternatingSubarray(N, A);
    }
    std::cout << std::endl;
    return 0;
}