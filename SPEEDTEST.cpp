//
// Created by PhantomCracker on 18.09.2022.
//

#include <iostream>
#include <string>

std::string fastestEmployer(int aliceDistance, int bobDistance, int aliceSpeed, int bobSpeed) {
    int aliceTime = aliceDistance / aliceSpeed;
    int bobTime = bobDistance / bobSpeed;
    if (aliceTime > bobTime) {
        return "Alice";
    } else if (aliceTime < bobTime) {
        return "Bob";
    } else {
        return "Equal";
    }
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B, X, Y;
        std::cin >> A >> B >> X >> Y;
        std::cout << fastestEmployer(A, B, X, Y) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}