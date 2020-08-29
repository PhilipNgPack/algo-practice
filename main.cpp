#include <iostream>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> swag = {1,3,5};

    for (int i = 0; i < swag.size(); ++i) {
        std::cout << swag[i] << std::endl;
    }

    return 0;
}
