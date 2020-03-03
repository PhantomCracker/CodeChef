//
// Created by PhantomCracker on 2/25/2020.
//

#include <iostream>
#include <limits>

long long int tallestMountain(int n, long long int* heights) {
    long long int max = 0;
    for(int i = 0; i < n; i++) {
        if(heights[i] > max) {
            max = heights[i];
        }
    }
    return max;
}

int main() {
    int t, n;

    std::cin >> t;
    for(int i = 0; i < t; i++) {
        std::cin >> n;
        long long int heights[n];
        for(int j = 0; j < n; j++) {
            std::cin >> heights[j];
        }
        std::cout << tallestMountain(n, heights) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}