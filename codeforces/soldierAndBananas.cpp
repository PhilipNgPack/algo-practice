//
// Created by Philip Ng Pack on 8/24/20.
//

#include <iostream>
//800
int main() {

    int k, n, w;
    int totalCost = 0;
    int mustBorrow = 0;
    std::cin >> k >> n >> w;

    for(int i = 1; i < w + 1; i++) {
        totalCost += i * k;
    }

    if (totalCost > n) {
        mustBorrow = totalCost - n;
    } else {
        mustBorrow = 0;
    }

    std::cout << mustBorrow << std::endl;
}
