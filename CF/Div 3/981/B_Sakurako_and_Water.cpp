#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fl(i, n) for (ll i = 0; i < n; i++)
#define nl "\n"
#define vi vector<ll>

void I_still_love_her() {
    ll n;
    cin >> n;
    vector<vi> a(n, vector<ll>(n, 0));

    fl(i, n) {
        fl(j, n) {
            cin >> a[i][j];
        }
    }

    ll total_operations = 0;

    for (ll d = 0; d < n; d++) {
        ll i = 0, j = d, min_height = 0;

        while (i < n && j < n) {
            min_height = min(min_height, a[i][j]);
            i++;
            j++;
        }

        if (min_height < 0) {
            total_operations += -min_height;
        }
    }

    for (ll d = 1; d < n; d++) {
        ll i = d, j = 0, min_height = 0;

        while (i < n && j < n) {
            min_height = min(min_height, a[i][j]);
            i++;
            j++;
        }

        if (min_height < 0) {
            total_operations += -min_height;
        }
    }

    cout << total_operations;
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
