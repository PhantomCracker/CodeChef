#include <iostream>

int numberOfEdgesCuted(int N, int M) {
    return (N - 1) * (M - 1);
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        std::cout << numberOfEdgesCuted(N, M) << std::endl;
    }
    std::cout << std::endl;
    return 0;
    
}