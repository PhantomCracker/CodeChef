//
// Created by PhantomCracker on 6/16/2020.
//

#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while(T--) {
        int N;
        std::cin >> N;

        if(N == 2010 || N == 2015 || N == 2016 || N == 2017 || N == 2019) {
            std::cout << "HOSTED" << std::endl;
        }
        else {
            std::cout << "NOT HOSTED" << std::endl;
        }
    }
    return 0;
}