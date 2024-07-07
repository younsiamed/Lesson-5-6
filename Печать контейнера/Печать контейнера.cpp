#include <iostream>
#include <windows.h>
#include <set>
#include <vector>
#include <list>

template <typename Container>
void print_container(const Container& container) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it != container.begin()) {
            std::cout << ", ";
        }
        std::cout << *it;
    }
    std::cout << std::endl;
}

int main() {
    SetConsoleOutputCP(65001);

    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four, one, three, two

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four

    return 0;
}
