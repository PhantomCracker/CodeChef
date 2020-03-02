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
        int mid;
        if(s.length() % 2 == 0) {
            mid = s.length() / 2;
        } else {
            mid = s.length() / 2 - 1;
        }

        int frequencyLeft[26] = {0};
        int frequencyRight[26] = {0};
        for(int i = 0; i < mid; i++) {
            frequencyLeft[s[i] - 'a']++;
        }
        for(int i = mid; i < s.length(); i++) {
            frequencyRight[s[i] - 'a']++;
        }

        for(int i = 0; i < s.length(); i++)
            std::cout<< frequencyLeft[i] << " ";

    }

    std::cout << std::endl;
    return 0;
}