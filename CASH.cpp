//
// Created by phantomcracker on 28.02.2020.
//

#include <iostream>

long long int cash(long long int n, long long int k, long long int* a) {
    long long int sum = 0;
    for(long long int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum % k;
}

int main() {
    long long int t;
    std::cin >> t;
    long long int n, k;
    for(long long int i = 0; i < t; i++) {
        std::cin >> n >> k;
        long long int a[n];
        for(long long int j = 0; j < n; j++) {
            std::cin >> a[j];
        }
        std::cout << cash(n, k, a) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
