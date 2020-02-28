//
// Created by phantomcracker on 28.02.2020.
//

#include <iostream>

unsigned long cash(unsigned long int n, unsigned long int k, unsigned long int* a) {

}

int main() {
    int t;
    std::cin >> t;
    unsigned long int n, k;
    for(int i = 0; i < t; i++) {
        std::cin >> n >> k;
        unsigned long int a[n];
        for(unsigned long int j = 0; j < n; j++) {
            std::cin >> a[j];
        }
        std::cout << cash(n, k, a);
    }

    std::cout << std::endl;
    return 0;
}
