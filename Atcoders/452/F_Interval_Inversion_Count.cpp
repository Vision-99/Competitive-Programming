#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define fle(i,a,b) for(ll i=a;i<=b;i++)
#define pb push_back
#define MOD 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define YR {cout<<"Yes";return;}
#define NR {cout<<"No";return;}

using vi = vector<ll>;
using vvi = vector<vi>;
using umpll = unordered_map<ll,ll>;
using umpcl = unordered_map<char,ll>;
using umpsl = unordered_map<string,ll>;

vector<ll> fact, invFact;

ll powm(ll base, ll exp, int mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

void aja_fact(int n) {
    fact.resize(n + 1);
    invFact.resize(n + 1);
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[n] = powm(fact[n], MOD - 2, MOD);
    for (int i = n - 1; i >= 1; i--) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

ll nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}


ll mex(vector<ll> &a) {
    unordered_set<ll> s(a.begin(), a.end());
    ll m = 0;
    while (s.count(m)) m++;
    return m;
}

ll dist(ll x1, ll y1, ll x2, ll y2) {return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);}

bool isprime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

ll count_primes(int n) {
    vector<bool> isPrime = sieve(n);
    return count(isPrime.begin(), isPrime.end(), true);
}

ll sum1(ll n) {return n * (n + 1) / 2;}
ll sum2(ll n) {return n * (n + 1) * (2 * n + 1) / 6;}
ll sum3(ll n) {return n * n * (n + 1) * (n + 1) / 4;}
ll ceil(ll a, ll b) {ll ans = (a + b - 1) / b; return ans;}
bool ps(ll n) {ll x = sqrt(n); if (n == x * x) return 1; else return 0;}

ll powm(ll x, ll n) {x %= MOD; if (n == 0) return 1; else if (n == 1) return x; ll p = powm(x * x, n / 2); if (n % 2) return p * x % MOD; else return p;}

ll gcd(ll a, ll b) {while (b != 0) {ll temp = b; b = a % b; a = temp;} return a;}
ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}
ll max(ll a, ll b, ll c) {return max(a, max(b, c));}
ll min(ll a, ll b, ll c) {return min(a, min(b, c));}
ll vmax(vector<ll>& a) {return *max_element(a.begin(), a.end());}
ll vmin(vector<ll>& a) {return *min_element(a.begin(), a.end());}
ll vsum(vector<ll>& a) {ll sum = accumulate(a.begin(), a.end(), 0LL); return sum;}

void input(vector<ll>& a, ll n) {fl(i,0,n) cin >> a[i];}

bool isvowel(char c) {c = tolower(c); return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');}
int cnt_of(vector<int>& a,int x){return count(all(a),x);}
int cnt_of(string& s,char c){return count(all(s),c);}


/*
    subarray with inv. count exactly equal to K

    answer = count(subarrays with inversions ≤ K) − count(subarrays with inversions ≤ K−1)
    typical fenfik Shit
    
*/


struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n = 0) { init(n); }

    void init(int n_) {
        n = n_;
        bit.assign(n + 1, 0);
    }

    void add(int i, int v) {
        for (; i <= n; i += i & -i) bit[i] += v;
    }

    int sum(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i) s += bit[i];
        return s;
    }
};

ll count_leq(const vector<int>& p, ll k) {
    if (k < 0) return 0;

    int n = (int)p.size() - 1;
    Fenwick fw(n);

    ll ans = 0, inv = 0;
    int r = 1, sz = 0;

    for (int l = 1; l <= n; l++) {
        while (r <= n) {
            int x = p[r];
            ll add_inv = sz - fw.sum(x); // elements > x
            if (inv + add_inv > k) break;
            inv += add_inv;
            fw.add(x, 1);
            sz++;
            r++;
        }

        ans += (r - l);

        int x = p[l];
        inv -= fw.sum(x - 1); // pairs (x, y) with y < x
        fw.add(x, -1);
        sz--;
    }

    return ans;
}

void I_still_love_her() {
    ll N,K;
    cin>>N>>K;


    vector<int> P(N + 1);
    for (int i = 1; i <= N; i++) cin >> P[i];

    ll ans = count_leq(P, K) - count_leq(P, K - 1);
    cout << ans << '\n';
    
}

int32_t main() {
    God_Speed
    int t = 1;
    // cin >> t;
    while (t--) {
        I_still_love_her();
        cout << '\n';
    }
    return 0;
}
// Golden Rules
/*
    All the problems that have rating less then 2000 are easy and if you still are not able to Solve them
    It means you have not Understood/read the Problem properly
 
    Solutions are simple.
 
    Proofs are simple.
 
    Implementations are simple.
*/