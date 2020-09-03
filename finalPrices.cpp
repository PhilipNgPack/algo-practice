//
// Created by Philip Ng Pack on 9/3/20.
//

#include <iostream>
#include <vector>

std::vector<int> finalPrices(std::vector<int> &prices) {

    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            if (prices[i] >= prices[j]) {
                prices[i] -= prices[j];
                break;
            }
        }

    }

    return prices;
}

int main() {
    std::vector<int> prices = {8, 4, 6, 2, 3};

    for (const auto &i: finalPrices(prices)) {
        std::cout << i << std::endl;
    }

}