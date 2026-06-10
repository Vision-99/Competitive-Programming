// LC- Template
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,a,b) for(int i=a;i<b;i++)
#define fle(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()


using vi = vector<int>;
using vvi = vector<vi>;
using umpii = unordered_map<int,int>;
using umpci = unordered_map<char,int>;
using umpsl = unordered_map<string,ll>;
using usi = unordered_set<int>;
using usc = unordered_set<char>;
using uss = unordered_set<string>;

vector<ll> fact, invFact;

ll powm(ll base, ll exp) {
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
        fact[i] = fact[i - 1] * i % mod;
    }
    invFact[n] = powm(fact[n], mod - 2);
    for (int i = n ; i >= 1; i--) {
        invFact[i-1] = invFact[i] * i % mod;
    }
}

ll nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[n-r] % mod * invFact[r] % mod;
}


int mex(vi &a) {
    usi s(all(a));
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

ll dist(ll x1, ll y1, ll x2, ll y2) {return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);}

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
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
bool is_ps(ll n) {ll x = sqrt(n); if (n == x * x) return 1; else return 0;}



int gcd(int a, int b) {while (b != 0) {int temp = b; b = a % b; a = temp;} return a;}
int lcm(int a, int b) {return (a * b) / gcd(a, b);}
int max(int a, int b, int c) {return max(a, max(b, c));}
int min(int a, int b, int c) {return min(a, min(b, c));}
int vmax(vector<int>& a) {return *max_element(a.begin(), a.end());}
int vmin(vector<int>& a) {return *min_element(a.begin(), a.end());}
int vsum(vector<int>& a) {int sum = accumulate(a.begin(), a.end(), 0); return sum;}
bool isvowel(char c) {c = tolower(c); return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');}



// Golden Rules
/*
    All the problems that have rating less then 2000 are easy and if you still are not able to Solve them
    It means you have not Understood/read the Problem properly

    You can Solve all 6 pointer problem easily Just believe in yourself
 
*/
