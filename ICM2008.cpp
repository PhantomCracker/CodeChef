//
// Created by PhantomCracker on 2/26/2020.
//

#include <iostream>
#include <string>

int main() {
    long int t;
    std::cin >> t;
    long long int a, b, c, d;
    while(t--) {
        std::cin >> a >> b >> c >> d;
        if(a == b)
            std::cout << "YES" << std::endl;
        else if(c != d && (a - b) % (c - d) == 0)
            std::cout<< "YES" << std::endl;
        else
            std::cout<< "NO" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}