//
// Created by Philip Ng Pack on 8/29/20.
//
#include <unordered_map>
#include <iostream>

int romanToInt(std::string s) {
    std::unordered_map<char, int> symMap({{'I', 1},
                                          {'V', 5},
                                          {'X', 10},
                                          {'L', 50},
                                          {'C', 100},
                                          {'D', 500},
                                          {'M', 1000}});

}

int main() {
    std::string input;
    std::cin >> input;
    romanToInt(input);
}
