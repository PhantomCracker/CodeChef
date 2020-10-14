//
// Created by phantomcracker on 05.03.2020.
//

#include <iostream>
#include <string>
#include <algorithm>

int frequency[1001] = {0};
int opened = 0;

int openedTweets(std::string sequence, int n) {
    std::string theNumber("");
    for(int i = 1; i <= sequence.length(); i++) {
        if(sequence[i] >= '0' && sequence[i] <= '9') {
            theNumber += sequence[i];
        }
    }
    int nr;
    if(theNumber != "") {
        nr = std::stoi(theNumber);
        frequency[nr]++;
        if(frequency[nr] % 2 == 0) {
            frequency[nr] = 0;
        } else {
            frequency[nr] = 1;
        }
    }
    else {
        nr = 0;
        opened = 0;
        std::fill(frequency, frequency+1001, 0);
    }
    long long int sum = 0;
    for(int i = 1; i <= 1000; i++) {
        sum = sum + frequency[i];
    }
    return sum;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::cin.ignore();
    std::string sequence;

    while(k--) {
        std::getline(std::cin, sequence);
        std::cout << openedTweets(sequence, n) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
