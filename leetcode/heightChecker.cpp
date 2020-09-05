//
// Created by Philip Ng Pack on 9/3/20.
//

#include <iostream>
#include <vector>
// not a well defined problem. Others had similar issues.
int heightChecker(std::vector<int> &heights) {
    int studentsMoved = 0;
    int temp = 0;

    for (int i = 0; i < heights.size() - 1; i++) {
        if (heights[i] > heights[i + 1]) {
            temp = heights[i];
            heights[i] = heights[i + 1];
            heights[i + 1] = temp;
            studentsMoved++;
        }
    }
    std::cout << studentsMoved << std::endl;
}

int main() {
    std::vector<int> aVector = {5, 1, 2, 3, 4};
    heightChecker(aVector);

}