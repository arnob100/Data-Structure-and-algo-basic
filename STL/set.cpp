#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered_set of integers
    std::unordered_set<int> s;

    // Insert some elements into the unordered_set
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(5);

    // Print the contents of the unordered_set
    std::cout << "Contents of the unordered_set:" << std::endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
