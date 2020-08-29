//
// Created by Philip Ng Pack on 8/25/20.
//
#include <iostream>

int main() {

    int s;
    std::cin >> s;
    int startingBurles = s;
    int totalCashBackRecieved = 0;

    while (s >= 10) {
        s -= 9;
        totalCashBackRecieved += 1;
    }

    int totalBurles = totalCashBackRecieved + startingBurles;
    std::cout << totalBurles << std::endl;
}