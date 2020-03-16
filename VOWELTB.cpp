//
// Created by PhantomCracker on 3/16/2020.
//

#include <iostream>

int main() {
    char c;
    std::cin >> c;

    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        std::cout << "Vowel";
    }
    else {
        std::cout << "Consonant";
    }

    std::cout << std::endl;
    return 0;
}
