//
// Created by PhantomCracker on 3/16/2020.
//

#include <iostream>

int isDivisibleByTen(int x) {
    int lastDigit = x % 10;
    if(x % 10 == 0) {
        return 0;
    }
    else if (lastDigit % 5 == 0) {
        return 1;
    }
    else {
        return -1;
    }
}

int main()
{
    int t;
    std::cin >> t;

    while(t--) {
        long long int x;
        std::cin >> x;
        std::cout << isDivisibleByTen(x) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}