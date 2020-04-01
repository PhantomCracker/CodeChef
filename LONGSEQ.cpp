//
// Created by PhantomCracker on 4/1/2020.
//

#include <iostream>
#include <string>

std::string checkFlipped(std::string number) {
    int frequency[2] = {0};
    for(int i = 0; i < number.length(); i++) {
        if(number[i] % 2 == 0) {
            frequency[0]++;
        }
        else {
            frequency[1]++;
        }
    }
    if(frequency[0] == 1 || frequency[1] == 1) {
        return "Yes";
    }
    else {
        return "No";
    }
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string number;
        std::cin >> number;
        std::cout << checkFlipped(number) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}