#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores;
    scores.push_back(85);
    scores.push_back(90);
    scores.push_back(78);

    std::cout << scores.size() << "\n";
    std::cout << scores[0] << "\n";
    std::cout << scores[2] << "\n";
    return 0;
}