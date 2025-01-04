#include <iostream>
#include <vector>
using namespace std;

// Function to check if n can be represented as a product of binary decimals
string canRepresentBinaryDecimals(long long n) {
    if (n == 1)
        return "NO";
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            long long factor = n / i;
            // Check if both factors are binary decimals
            if ((factor & (factor - 1)) == 0 || (i & (i - 1)) == 0)
                return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        long long n;
        cin >> n; // input number
        cout << canRepresentBinaryDecimals(n) << endl; // output result
    }

    return 0;
}
