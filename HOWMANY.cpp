//
// Created by PhantomCracker on 6/16/2020.
//

#include <iostream>

int numberOfDigits(int n) {
    int counter = 0;
    while(n != 0) {
        counter++;
        n = n / 10;
    }
    return counter;
}

int main() {
    int N;
    std::cin >> N;
    int counter = numberOfDigits(N);
    if(counter == 1)
        std::cout << "1";
    else if(counter == 2)
        std::cout << "2";
    else if(counter == 3)
        std::cout << "3";
    else
        std::cout << "More than 3 digits";

    std::cout << std::endl;
    return 0;
}