#include <bits/stdc++.h>
using namespace std;

// Helper function to create a palindrome from a half
long long createPalindrome(long long half, bool oddLength) {
    string str = to_string(half);
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (oddLength) {
        str.pop_back();
    }
    return stoll(str + rev);
}

// Function to find the N-th smallest palindrome
long long findNthPalindrome(long long N) {
    if (N == 1) return 0; // Special case for the first palindrome

    N -= 1; // Adjust N to account for 0 being the first palindrome
    long long length = 1;
    long long count = 9;

    // Determine the length of the palindrome that N falls into
    while (N >= count) {
        N -= count;
        length++;
        count = 9 * pow(10, (length - 1) / 2);
    }

    long long halfStart = pow(10, (length - 1) / 2);
    long long halfNum = halfStart + N;

    return createPalindrome(halfNum, length % 2 != 0);
}

int main() {
    long long N;
    cin >> N;
    cout << findNthPalindrome(N) << endl;
    return 0;
}