//
// Created by Philip Ng Pack on 9/3/20.
//

#include <iostream>
#include <vector>

int removeElement(std::vector<int> &nums, int val) {

    for(int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == val) {
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    std::cout << nums.size() << std::endl;
    return nums.size();
}

int main() {
    int val = 2;
    std::vector<int> aVector = {0,1,2,2,3,0,4,2};

    removeElement(aVector, val);
}