#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // P[k] = powers of 2 having exactly k digits
    vector<vector<int>> P(10);
    for (long long x = 1; x <= 1e9; x <<= 1) {
        int d = to_string(x).size();
        P[d].push_back((int)x);
    }

    // X[k] = all good integers with k digits
    vector<unordered_set<int>> X(10);
    X[0].insert(0);

    vector<int> A;

    for (int k = 1; k <= 9; k++) {
        for (int i = 1; i <= k; i++) {
            int mul = pow(10, i);
            for (int x : X[k - i]) {
                for (int p : P[i]) {
                    int val = x * mul + p;
                    if (val <= 1e9) X[k].insert(val);
                }
            }
        }
        for (int v : X[k]) A.push_back(v);
    }

    sort(A.begin(), A.end());

    int n;
    cin >> n;
    cout << A[n - 1] << '\n';

    return 0;
}