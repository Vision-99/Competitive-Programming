#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string toBinary(int n) {
    std::string binary;
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }
    return binary.empty() ? "0" : binary;
}

bool cum(int a,int b){
    return toBinary(a) < toBinary(b);
}

int main() {
    std::vector<int> nums = {5, 3, 7, 1, 2};

    std::sort(nums.begin(), nums.end(), cum);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
