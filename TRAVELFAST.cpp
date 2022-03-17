//
// Created by PhantomCracker on 17-Mar-22.
//

#include <iostream>
#include <string>

std::string fastestVehicle(int bike, int car) {
    if (bike < car) {
        return "Bike";
    } else if (bike > car) {
        return "Car";
    } else {
        return "Same";
    }
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X, Y;
        std::cin >> X >> Y;
        std::cout << fastestVehicle(X, Y) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}