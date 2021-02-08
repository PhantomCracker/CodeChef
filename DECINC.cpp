//
// Created by phantomcracker on 03.03.2020.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if(n % 4 == 0) {
        n++;
    }
    else {
        n--;
    }
    std::cout << n;

    std::cout << std::endl;
    return 0;
}