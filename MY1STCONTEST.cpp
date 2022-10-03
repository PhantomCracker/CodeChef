//
// Created by PhantomCracker on 03.10.2022.
//

#include <iostream>

int usersGetRating(int newUsers, int sawUsers, int submitedUsers) {
    return newUsers - sawUsers;
}

int usersGetRating1000(int newUsers, int sawUsers, int submitedUsers) {
    return newUsers - sawUsers - submitedUsers;
}

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    std::cout << usersGetRating(N, A, B) << " " << usersGetRating1000(N, A, B);

    std::cout << std::endl;
    return 0;
}