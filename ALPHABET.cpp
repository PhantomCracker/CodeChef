//
// Created by PhantomCracker on 08-Feb-21.
//

#include <iostream>
#include <string>

int main() {
    std::string S;
    int N;
    std::cin >> S;
    std::cin >> N;
    int freq[26] = {0};
    for (int i = 0; i < 26; i++) {
        freq[S[i] - 'a']++;
    }

    while (N--) {
        bool knownWord = false;
        std::string W;
        std::cin >> W;
        for (int i = 0; i < W.length(); i++) {
            if (freq[W[i] - 'a'] == 0) {
                knownWord = true;
                break;
            }
        }
        if (!knownWord) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}