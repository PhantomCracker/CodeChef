//
// Created by PhantomCracker on 16-Feb-21.
//

#include <iostream>
#include <string>

std::string rainbowArray(int N, int* A) {
    bool isRainbowArray = true;
    int count = 0;
    int left = 1, right = N;
    while (count < 6) {
        count++;
        if (A[left] != count || A[right] != count) {
            isRainbowArray = false;
            break;
        }
        int r1 = 0, r2 = 0;
        while (left <= N && A[left] == count) {
            r1++;
            left++;
        }
        while (right > 0 && A[right] == count) {
            r2++;
            right--;
        }
        if (r1 != r2) {
            isRainbowArray = false;
            break;
        }
    }
    if (count == 6 && left <= right) {
        count++;
        for (int j = left; j <= right; j++) {
            if (A[j] != 7) {
                isRainbowArray = false;
            }
        }
    } else {
        isRainbowArray = false;
    }
    if (isRainbowArray) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        int A[N];
        for (int i = 1; i <= N; i++) {
            std::cin >> A[i];
        }
        std::cout << rainbowArray(N, A) << std::endl;
    }

    std::cout << std::endl;
    return 0;
}