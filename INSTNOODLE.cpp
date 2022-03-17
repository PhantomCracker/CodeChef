//
// Created by PhantomCracker on 07-Mar-22.
//

#include <iostream>

int numberOfCustomers(int stoves, int customers) {
    return stoves * customers;
}

int main() {
    int X, Y;
    std::cin >> X >> Y;
    std::cout << numberOfCustomers(X, Y);
    std::cout << std::endl;
    return 0;
}