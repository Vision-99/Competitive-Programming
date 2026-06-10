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


/*
    o e o e o e o e o e o e

    2 odd one even sucks, 
    if two odd are there make sure one is multiple of other 

    ex. (7,21,2)

    prime even prime----> even prime even
    17 18 19 ----> 18 17 20 , cz cnt of even > cnt of prime
    
*/

void I_still_love_her() {
    ll n;
    cin>>n;

    vi a(n,0);
    
    // fl(i,0,n) a[i] = i+1;

    // unordered_set<int> st(all(a));

    // put odd and there multiple first 3,6,9,
    // move to the next odd , 5,10,15,20..
    // for big number this will give WA , cz diff. b/w mulitple inc. SO it will be like odd,odd,odd
    // 
    if(n==3){ cout<<"2 1 3"; return; }
    if(n==4){ cout<<"2 1 4 3"; return; }
    if(n==5){ cout<<"5 4 1 3 2"; return; }
    if(n==6){ cout<<"4 1 6 3 5 2"; return; }


    vi p={4,1,6,3,5,2};

    for(int i=7;i<=n;i+=2){
        if(i+1<=n){ p.pb(i+1); p.pb(i); }
        else p.pb(i);
    }

    for(auto x:p) cout<<x<<" ";
    
    
    
}

int32_t main() {
    God_Speed
    int t = 1;
    cin >> t;
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