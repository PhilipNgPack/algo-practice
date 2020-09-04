//
// Created by Philip Ng Pack on 9/3/20.
//

#include <iostream>
#include <vector>
// this method is slow because of the double for loop. A more efficient solution might be to add
// a second vector that stores ints. In addition, using .pop_back, .back(), and .push_back() would
// be beneficial
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