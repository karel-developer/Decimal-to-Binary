#include "../include/decimal_to_binary.h"
#include <vector>
#include <algorithm>

std::string decimalToBinary(int num) {
    if(num == 0) {
        return "0";
    }

    std::vector<int> binaryDigits;
    std::string result;

    while(num > 0) {
        binaryDigits.push_back(num % 2);
        num /= 2;
    }
    reverse(binaryDigits.begin(), binaryDigits.end());

    for(int bit : binaryDigits) {
        result += std::to_string(bit);
    }
    
    return result;
}