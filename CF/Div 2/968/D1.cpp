#include <bits/stdc++.h>
using namespace std;

#define fl(i, n) for (int i = 0; i < n; i++)
#define int long long
using vi = vector<int>;
using ll = long long;

ll sum(ll x) {
    return x * (x + 1) / 2;
}

ll interval(ll l, ll r) {
    return sum(r) - sum(l - 1);
}

void solve() {
    int n;
    ll m;
    cin >> n >> m;

    set<int> t;
    ll s = 0;

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        fl(j, l) {
            int x;
            cin >> x;
            t.insert(x);
        }
    }

    int mex = 0;
    while (t.count(mex)) {
        mex++;
    }

    if (m <= mex - 1) {
        cout << (m + 1) * m / 2;
    } else {
        cout << sum(mex - 1) + interval(mex, m);
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    
}
