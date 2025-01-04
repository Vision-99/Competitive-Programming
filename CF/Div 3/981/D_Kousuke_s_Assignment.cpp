#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fl(i, n) for (ll i = 0; i < n; i++)
#define nl "\n"
#define vi vector<ll>

void I_still_love_her() {
    ll n;
    cin >> n;
    vi a(n);

    fl(i, n) {
        cin >> a[i];
    }

    unordered_set<ll> prefix_sums;
    ll prefix_sum = 0, beautiful_segments = 0;

    prefix_sums.insert(0);

    fl(i, n) {
        prefix_sum += a[i];

        if (prefix_sums.count(prefix_sum)) {
            beautiful_segments++;
            prefix_sums.clear();
            prefix_sums.insert(0);
            prefix_sum = 0;
        }

        prefix_sums.insert(prefix_sum);
    }

    cout << beautiful_segments;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        I_still_love_her();
        cout << nl;
    }

    return 0;
}
