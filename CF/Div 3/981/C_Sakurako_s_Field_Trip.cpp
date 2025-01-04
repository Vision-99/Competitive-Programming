#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int N = 2e5 + 5;

void I_still_love_her() {
    ll n;
    cin >> n;
    vi a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n / 2; i++) {
        if (a[i] == a[i - 1] || a[n - i - 1] == a[n - i]) {
            swap(a[i], a[n - i - 1]);
        }
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            ans++;
        }
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        I_still_love_her();
        cout << '\n';
    }

    return 0;
}
