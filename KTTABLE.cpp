//
// Created by PhantomCracker on 3/26/2020.
//

#include <iostream>

int studentsThatWasAbleToCook(int n, long long int* a, long long int* b) {
    long long int students = 0;
    for(long long int i = 1; i <= n; i++) {
        if(b[i] <= a[i] - a[i-1]) {
            students++;
        }
    }
    return students;
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        long long int a[n+1], b[n+1];
        a[0] = 0;
        for(long long int i = 1; i <= n; i++) {
            std::cin >> a[i];
        }
        for(long long int i = 1; i <= n; i++) {
            std::cin >> b[i];
        }

        std::cout << studentsThatWasAbleToCook(n, a, b) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}