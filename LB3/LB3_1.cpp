#include <iostream>

int main() {
    int N;
    std::cout << "enter a three-digit number: ";
    std::cin >> N;

    int sum = 0;

    int hundreds = N / 100;
    int tens = (N / 10) % 10;
    int ones = N % 10;

    if (hundreds > 5) sum += hundreds;
    if (tens > 5) sum += tens;
    if (ones > 5) sum += ones;

    std::cout << "The sum of digits greater than 5: " << sum << std::endl;

    return 0;
}
