//
// Created by phantomcracker on 05.03.2020.
//

#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int numberOfNeededPotatoes(int x, int y) {
    int sum = x + y + 1;
    bool found = false;
    while(found == false) {
        if(isPrime(sum)) {
            found = true;
            break;
        }
        else {
            sum++;
        }
    }
    return sum - x - y;
}

int main() {
    int t;
    std::cin >> t;
    int x, y;
    while(t--) {
        std::cin >> x >> y;
        std::cout << numberOfNeededPotatoes(x, y) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}