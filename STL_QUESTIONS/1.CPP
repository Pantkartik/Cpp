// Sort a Vector of Integers


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 1, 3};

    std::sort(v.begin(), v.end());

    for (int i : v)
        std::cout << i << " ";

    return 0;
}
