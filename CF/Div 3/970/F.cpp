#include <bits/stdc++.h>
using namespace std;

#define fl(i, n) for(int i = 0; i < n; i++)

using vi = vector<int>;
using ll = long long;

const int MOD = 1e9 + 7;

ll fastadd(ll x, ll y) {
    return (MOD + (x % MOD) + (y % MOD)) % MOD;
}

ll fastmul(ll x, ll y) {
    return ((x % MOD) * (y % MOD)) % MOD;
}

ll binpow(ll x, ll y) {
    if (y == 0) return 1;
    ll powa = binpow(x, y / 2);
    powa = fastmul(powa, powa);
    if (y % 2 == 1) return fastmul(powa, x);
    return powa;
}

ll modinv(ll x, ll m = MOD) {
    return binpow(x, m - 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll total_sum = 0;
        fl(i, n) {
            cin >> arr[i];
            total_sum = fastadd(total_sum, arr[i]);
        }

        ll sol = 0;
        fl(i, n) {
            sol = fastadd(sol, fastmul(total_sum - arr[i], arr[i]));
        }

        cout << fastmul(sol, modinv(fastmul(n, n - 1))) << endl;
    }

    return 0;
}
