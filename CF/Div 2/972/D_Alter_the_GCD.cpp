#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD of an array
int gcdArray(const vector<int>& arr) {
    int gcd_val = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        gcd_val = __gcd(gcd_val, arr[i]);
        if (gcd_val == 1) break; // no point in continuing if gcd is 1
    }
    return gcd_val;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    int maxGCD = gcdArray(a) + gcdArray(b);
    int count = 1; // At least one solution without any swaps
    
    for (int l = 1; l <= n; ++l) {
        vector<int> tempA = a, tempB = b;
        for (int r = l; r <= n; ++r) {
            // Swap elements between a and b from l to r (1-based)
            for (int i = l - 1; i < r; ++i) swap(tempA[i], tempB[i]);

            // Calculate GCD after the swap
            int currentGCD = gcdArray(tempA) + gcdArray(tempB);
            if (currentGCD > maxGCD) {
                maxGCD = currentGCD;
                count = 1; // New maximum, reset count
            } else if (currentGCD == maxGCD) {
                count++; // Another pair (l, r) achieves the maximum
            }
        }
    }
    
    cout << count << " " << maxGCD << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
