#include <iostream>
#include <string>

std::string chefLikeSequence(int N, int M, int *A, int *B) {
    int Ax = 0, Bx = 0;
    for (int i = 0; i < M; i++) {
        Ax++;
        for (int j = i; j < N; j++) {
            if (B[i] == A[j]) {
                Bx++;
            }
        } 
    }
    if (Ax == Bx) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }
        int M;
        std::cin >> M;
        int B[M];
        for (int i = 0; i < M; i++) {
            std::cin >> B[i];
        }
        std::cout << chefLikeSequence(N, M, A, B) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}