#include <iostream>
#include <vector>

// Insertion sort
std::vector<int> InsertionSort(std::vector<int> digits) {

    for (std::size_t next_elem = 1; next_elem < digits.size(); next_elem++) {
        int key = digits[next_elem];
        int place = next_elem - 1;

        while (place >= 0 && digits[place] > key) {
            digits[place + 1] = digits[place];
            place -= 1;
        }

        digits[place + 1] = key;
    }

    return digits;
}

// Main for testing
int main()
{

    return 0;
}
