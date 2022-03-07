#include <iostream>
#include <cstdio>

int main() {
    long long A, B;
    char C;
    std::cin >> A >> B >> C;
    
    if (C == '+') {
        std::cout << A + B;
    } else if (C == '-') {
        std::cout << A - B;
    } else if (C == '*') {
        std::cout << A * B;
    } else {
        printf("%lf\n", (double)A / B); 
    }
    
    std::cout << std::endl;
    return 0;
}