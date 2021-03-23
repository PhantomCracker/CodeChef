#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, B;
        std::cin >> N >> B;
        int W[N], H[N], P[N];

        int maxArea = 0;
        for (int i = 0; i < N; i++) {
            std::cin >> W[i] >> H[i] >> P[i];
            int area = W[i] * H[i];
            if (P[i] <= B && area >= maxArea) {
                maxArea = area;
            }
        }
        if (maxArea == 0) {
            std::cout << "no tablet" << std::endl;
        } else {
            std::cout << maxArea << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}