#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int gcd_ab = gcd(a, b);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        c[i] %= gcd_ab;
    }
    sort(c.begin(), c.end());
    int min_range = c.back() - c.front();
    for (int i = 0; i < n - 1; i++) {
        min_range = min(min_range, c[i] + gcd_ab - c[i + 1]);
    }
    cout << min_range << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}