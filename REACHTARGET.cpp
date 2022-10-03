//
// Created by PhantomCracker on 03.10.2022.
//


#include <iostream>

int winningTeam(int teamARuns, int teamBRuns) {
    return teamARuns - teamBRuns;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X, Y;
        std::cin >> X >> Y;

        std::cout << winningTeam(X, Y) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}