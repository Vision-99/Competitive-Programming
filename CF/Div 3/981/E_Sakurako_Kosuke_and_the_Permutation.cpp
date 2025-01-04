#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fl(i, n) for (ll i = 0; i < n; i++)
#define nl "\n"
#define vi vector<ll>

void I_still_love_her() {
    ll n;
    cin >> n;
    vi p(n);
    fl(i, n) cin >> p[i];

    vector<bool> vis(n + 1, false);
    ll res = 0;

    for (ll i = 1; i <= n; i++) {
        if (!vis[i]) {
            ll cnt = 0, j = i;
            while (!vis[j]) {
                vis[j] = true;
                j = p[j - 1];
                cnt++;
            }
            if (cnt >= 3) {
                res += (cnt - 1) / 2;
            }
        }
    }

    cout << res;
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
