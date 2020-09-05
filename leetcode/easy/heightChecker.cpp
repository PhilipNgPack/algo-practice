//
// Created by Philip Ng Pack on 9/3/20.
//

#include <vector>
// used std::sort instead of making my own
// Runtime: 4 ms, faster than 89.26% of C++ online submissions for Height Checker.
// Memory Usage: 8.4 MB, less than 26.90% of C++ online submissions for Height Checker.
int heightChecker(std::vector<int> &heights) {
    std::vector<int> newHeights(heights);
    int studentsMoved = 0;

    std::sort(newHeights.begin(), newHeights.end());

    // checks indexes between arrays
    for (int i = 0; i < heights.size(); i++) {
        if(heights[i] != newHeights[i]) {
            studentsMoved++;
        }
    }

    return studentsMoved;
}

int main() {
    std::vector<int> aVector = {1, 1, 4, 2, 1, 3};
    heightChecker(aVector);
}