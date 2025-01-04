#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 



void I_still_love_her() {
    ll n, m, q, a, b, pos;
    cin >> n >> m >> q >> a >> b >> pos;
   if(pos < min(a, b)) {
        cout<<min(a, b) - 1;
    } else if(pos > max(a, b)) {
        cout<<n - max(a, b);
    } else {
        ll midval = (a + b) / 2;
        cout<<min(abs(midval - a), abs(midval - b));
    }
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
