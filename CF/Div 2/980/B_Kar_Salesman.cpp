#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i, n) for (ll i = 0; i < n; i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

using vi = vector<ll>;

ll ceil(ll a, ll b)
{
    ll ans = (a + b - 1) / b;
    return ans;
}

ll vmax(vector<ll> &a) { return *max_element(a.begin(), a.end()); }

ll vmin(vector<ll> &a) { return *min_element(a.begin(), a.end()); }

ll vsum(vector<ll> &a)
{
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    return sum;
}

void input(vector<ll> &a, ll n) { fl(i, n) cin >> a[i]; }


void I_still_love_her()
{

    ll n, x;
    cin >> n >> x;
    vi a(n);
    input(a, n);
    cout<<max(vmax(a),ceil(vsum(a),x));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {

        I_still_love_her();

        cout << endl;
    }

    return 0;
}