//
// Created by PhantomCracker on 18-Feb-21.
//

#include <iostream>

int numberOfSavedFriendships(int n, int* d) {
    int freq[101] = {0};
    int trueFriends = n;
    for (int i = 0; i < n; i++) {
        freq[d[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (freq[i] > 1) {
            trueFriends = trueFriends - freq[i] + 1;
        }
    }
    return trueFriends;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int d[n];
        for (int i = 0; i < n; i++) {
            std::cin >> d[i];
        }
        std::cout << numberOfSavedFriendships(n, d) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}