#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n; // Read the number of integers

    std::vector<int> numbers(n);

    // Read the integers into the vector
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int pos1;
    std::cin >> pos1; // Read the position for the first query
    if (pos1 > 0 && pos1 <= numbers.size()) {
        numbers.erase(numbers.begin() + (pos1 - 1)); // Erase element at position pos1 (1-based index)
    }

    int range_start, range_end;
    std::cin >> range_start >> range_end; // Read the range for the second query
    if (range_start > 0 && range_end <= numbers.size() && range_start <= range_end) {
        numbers.erase(numbers.begin() + (range_start - 1), numbers.begin() + range_end); // Erase elements in the range [range_start, range_end)
    }

    // Print the final vector
    std::cout << numbers.size() << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
