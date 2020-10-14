//
// Created by phantomcracker on 16.03.2020.
//

#include <iostream>
#include <string>
#include <algorithm>

std::string itsRectangle(int lengths[]) {
    std::sort(lengths, lengths+4);
    if(lengths[0] == lengths[1] && lengths[2] == lengths[3]) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int t;
    std::cin >> t;

    while(t--) {
        int lengths[4];
        for(int i = 0; i < 4; i++) {
            std::cin >> lengths[i];
        }
        std::cout << itsRectangle(lengths) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}