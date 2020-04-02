//
// Created by PhantomCracker on 4/2/2020.
//

#include <iostream>

void areaOrPeri(int l, int b) {
    int area = l * b;
    int peri = 2 * (l + b);
    if(area > peri) {
        std::cout << "Area" << std::endl << area;
    }
    else if(peri > area) {
        std::cout << "Peri" << std::endl << peri;
    }
    else {
        std::cout << "Eq" << std::endl << area;
    }
}

int main() {
    int l, b;
    std::cin >> l >> b;

    areaOrPeri(l, b);

    std::cout << std::endl;
    return 0;
}