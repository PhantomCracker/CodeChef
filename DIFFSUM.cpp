//
// Created by phantomcracker on 05.03.2020.
//

#include <iostream>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    int result;
    n1 > n2 ? result = n1 - n2 : result = n1 + n2;
    std::cout << result << std::endl;

    std::cout << std::endl;
    return 0;
}