//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>
#include <string>

std::string getFunded(int unitsOfPower, int years, int grams, int providedUnitsOfPower) {
    int unitsInYears = unitsOfPower * years;
    int moon = grams * providedUnitsOfPower;
    return moon >= unitsInYears ? "Yes" : "No";
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B, X, Y;
        std::cin >> A >> B >> X >> Y;
        std::cout << getFunded(A, B, X, Y) << std::endl;
    }
}