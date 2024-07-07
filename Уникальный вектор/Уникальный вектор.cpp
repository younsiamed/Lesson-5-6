#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<int> removeDuplicates(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());

    auto last = std::unique(vec.begin(), vec.end());

    vec.erase(last, vec.end());

    return vec;
}

int main() {
    SetConsoleOutputCP(65001);
    std::cout << "[IN]: ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream stream(input);
    std::vector<int> vec;
    int number;

    while (stream >> number) {
        vec.push_back(number);
    }

    vec = removeDuplicates(vec);

    std::cout << "[OUT]: ";
    for (const int& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
