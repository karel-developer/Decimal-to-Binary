#include <iostream>
#include "decimal_to_binary.h"

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;

    std::cout << "The binary representation of " << num 
              << " is: " << decimalToBinary(num) << std::endl;

    return 0;
}