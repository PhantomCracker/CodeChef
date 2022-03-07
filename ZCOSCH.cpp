//
// Created by PhantomCracker on 22-Oct-21.
//

#include <iostream>

int main() {
    int R;
    std::cin >> R;
    if (R <= 50) {
        std::cout << "100";
    } else if (R <= 100) {
        std::cout << "50";
    } else {
        std::cout << "0";
    }

    std::cout << std::endl;
    return 0;
}