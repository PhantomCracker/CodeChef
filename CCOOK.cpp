//
// Created by PhantomCracker on 02.03.2021
//

#include <iostream>
#include <string>

std::string hackerOrNot(int* A) {
    int noOfProblems = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] == 1) {
            noOfProblems++;
        }
    }
    if (noOfProblems == 0) {
        return "Beginner";
    } else if (noOfProblems == 1) {
        return "Junior Developer";
    } else if (noOfProblems == 2) {
        return "Middle Developer";
    } else if (noOfProblems == 3) {
        return "Senior Developer";
    } else if (noOfProblems == 5) {
        return "Jeff Dean";
    } else {
        return "Hacker";
    }
}

int main() {
    int N;
    std::cin >> N;
    int A[N];
    while (N--) {
        for (int i = 0; i < 5; i++) {
            std::cin >> A[i];
        }
        std::cout << hackerOrNot(A) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}