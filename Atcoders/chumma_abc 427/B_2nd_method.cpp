#include <bits/stdc++.h>
using namespace std;

#define int long long

int dsum(int x) {
    int sm = 0;
    if (x == 0) return 1;
    while (x) {
        sm += x % 10;
        x /= 10;
    }
    return sm;
}

int32_t main() {
    int n;
    cin >> n;

    int prev = 1;  // dp[0]
    if (n == 0) {
        cout << prev;
        return 0;
    }

    for (int i = 1; i <= n; i++)
        prev = prev + dsum(prev);  // dp[i] = dp[i-1] + dsum(dp[i-1])

    cout << prev;
}
