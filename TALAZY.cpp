//
// Created by PhantomCracker on 15-Mar-21.
//

#include <iostream>

long long int timeToFinishHomework(long long int N, long long int B, long long int M) {
    long long int numberOfProblems;
    long long int time = 0;
    while (N != 0) {
        numberOfProblems = (N + 1) / 2;
        time = time + (numberOfProblems * M);
        N = N - numberOfProblems;
        if (N) {
            time = time + B;
        }
        M = M * 2;
    }
    return time;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        long long int N, B, M;
        std::cin >> N >> B >> M;
        std::cout << timeToFinishHomework(N, B, M) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}