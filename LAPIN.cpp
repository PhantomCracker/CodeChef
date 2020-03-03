//
// Created by PhantomCracker on 2/29/2020.
//


#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    std::string s;

    while(t--) {
        std::cin >> s;

        int frequencyLeft[30] = {0};
        int frequencyRight[30] = {0};
        for(int i = 0; i < s.length() / 2; i++) {
            frequencyLeft[s[i] - 'a']++;
        }
        for(int i = s.length() / 2 + s.length() % 2; i < s.length(); i++) {
            frequencyRight[s[i] - 'a']++;
        }

        int counter = 0;
        for(int i = 0; i < 25; i++) {
            counter++;
            if(frequencyLeft[i] != frequencyRight[i]) {
                break;
            }
        }
        if(counter == 25) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }

    }

    std::cout << std::endl;
    return 0;
}