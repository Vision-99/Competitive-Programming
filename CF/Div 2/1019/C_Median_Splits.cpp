#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define fle(i,a,b) for(ll i=a;i<=b;i++)
#define nl endl
#define pb push_back
#define MOD 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define YR {cout<<"YES";return;}
#define NR {cout<<"NO";return;}

using vi = vector<ll>;
using vvi  = vector<vi>;
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

ll MFE(const vector<ll>& nums) {
    unordered_map<ll, ll> freq;
    int maxFreq = 0, mostFreqElement;
    for (ll num : nums) {
        freq[num]++;
        if (freq[num] > maxFreq) {
            maxFreq = freq[num];
            mostFreqElement = num;
        }
    }
    return mostFreqElement;
}

ll MF(const vector<ll>& nums) {
    unordered_map<ll, ll> freq;
    ll ans = 0;
    for (ll num : nums) {
        freq[num]++;
        if (freq[num] > ans) ans = freq[num];
    }
    return ans;
}




void I_still_love_her(){

    ll n,k;
    cin>>n>>k;
    vi a(n+1),b(n+1),S(n+1);

    fl(i,1,n+1){
        cin>>a[i];
        b[i]=(a[i]<=k?1:-1);
        S[i]=S[i-1]+b[i];
    }

    vi P(n+1),R(n+2);
    fl(i,1,n-1){
        ll t=(i%2?1:0);
        P[i]=(S[i]>=t);
    }
    fl(j,3,n+1){
        ll len=n-j+1,th=(len%2?1:0);
        R[j]=(S[n]-S[j-1]>=th);
    }

    const ll INF = (ll)1e18;
    vvi sM(2,vi(n+3, -INF));

    for(ll i=n-1;i>=1;i--){
        fl(p,0,2){
            sM[p][i]=sM[p][i+1];
        }
        if(i<=n-1){
            sM[i%2][i]=max(sM[i%2][i], S[i]);
        }
    }

    vvi pM(2,vi(n+2, INF));
    fl(i,1,n+1){
        fl(p,0,2){
            pM[p][i]=pM[p][i-1];
        }
        pM[i%2][i]=min(pM[i%2][i], S[i]);
    }
    
    auto A = [&](ll i){
        return (sM[i%2][i+1]>=S[i]) || (sM[1-(i%2)][i+1]>=S[i]+1);
    };
    auto B = [&](ll r){
        return (pM[r%2][r-1]<=S[r]) || (pM[1-(r%2)][r-1]<=S[r]-1);
    };
    bool ok=0;
    
    vi pre(n+1);
    fl(i,1,n-1) pre[i]=(i>1?pre[i-1]:0)|P[i];
    fl(j,3,n+1) if(R[j] && pre[j-2]) ok=1;
    
    fl(i,1,n-1) if(P[i] && A(i)) ok=1;
    
    fl(r,2,n) if(B(r) && R[r+1]) ok=1;

    if(ok) YR
    NR
}




int main() {
    God_Speed
    int t = 1;
    cin >> t;
    while (t--) {
        I_still_love_her();
        cout << nl;
    }
    return 0;
}