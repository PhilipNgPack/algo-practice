#include <iostream>

bool charChecker(const char &c, char (&arr)[26], uint8_t currentIndex) {
    for (int i = 0; i < currentIndex; ++i) {
        if (c == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {

    std::string input;
    std::cin >> input;
    uint8_t duplicateCount = 0;
    uint8_t currentIndex = 0;
    char seenCharacters[26];

    for (int i = 0; i < input.length(); ++i) {
        if (charChecker(input[i], seenCharacters, currentIndex)) {
            duplicateCount++;
        } else {
            seenCharacters[currentIndex] = input[i];
            currentIndex++;
        }
    }

    uint8_t uniqueNameLength = input.length() - duplicateCount;

    if (uniqueNameLength % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}