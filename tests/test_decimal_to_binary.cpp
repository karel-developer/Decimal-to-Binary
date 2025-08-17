#include "../include/decimal_to_binary.h"
#include <cassert>
#include <iostream>

void testDecimalToBinary() {
    assert(decimalToBinary(0) == "0");
    assert(decimalToBinary(1) == "1");
    assert(decimalToBinary(2) == "10");
    assert(decimalToBinary(5) == "101");
    assert(decimalToBinary(10) == "1010");
    assert(decimalToBinary(255) == "11111111");
    
    std::cout << "All tests passed successfully!\n";
}

int main() {
    testDecimalToBinary();
    return 0;
}