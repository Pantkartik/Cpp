// Find Frequency of Elements using Map


#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<int> v = {1, 2, 2, 3, 3, 3, 4};

    std::map<int, int> freq;

    for (int num : v)
        freq[num]++;

    for (auto pair : freq)
        std::cout << pair.first << " -> " << pair.second << std::endl;

    return 0;
}
