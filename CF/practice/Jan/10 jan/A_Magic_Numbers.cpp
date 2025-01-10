#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 
#define rall(a) a.rbegin(),a.rend()
#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


using vi = vector<ll>;

ll fact(ll x){if(x==1 || x==0)return 1;else return x*fact(x-1);}
ll ncr(ll n, ll r){return(fact(n)/(fact(n-r)*fact(r)));}
ll dist(ll x1,ll y1 ,ll x2,ll y2){return (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);}


bool isprime(ll n){ll f=1;for(ll i=n-1;i>1;i--){if(n%i==0){f=0;break;}}return f;}

ll sum1(ll n){return n*(n+1)/2;}
ll sum2(ll n){return n*(n+1)*(2*n +1)/6;}
ll sum3(ll n){return n*n*(n+1)*(n+1)/4;}
ll ceil(ll a, ll b){ll ans = (a + b - 1) / b;return ans;}
bool ps(ll n){ ll x = sqrt(n);if(n == x*x) return 1;else return 0;}

ll powm(ll x, ll n) {x %= mod;if (n == 0) return 1;else if (n == 1) return x;ll p = powm(x * x, n / 2);if (n % 2) return p * x % mod;else    return p;}

ll gcd(ll a, ll b) {while (b != 0) {ll temp = b;b = a % b;a = temp;}return a;}

ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}

ll max(ll a, ll b, ll c){return max(a,max(b,c));}

ll min(ll a, ll b, ll c){return min(a,min(b,c));}

ll vmax(vector<ll>& a){return *max_element(a.begin(),a.end());}

ll vmin(vector<ll>& a){return *min_element(a.begin(),a.end());}

ll vsum(vector<ll>& a){ll sum=accumulate(a.begin(), a.end(), 0LL);return sum;}

void input(vector<ll>& a,ll n){fl(i,n)cin>>a[i];}





void I_still_love_her(){

string s;
cin>>s;

int n=s.size();

for(int i=0;i<n;i++){
    if((s[i]=='1'||s[i]=='4') and (s[0]=='1')) continue;
    else {cout<<"NO";return;}

}

if(s.find("444") !=string::npos) {cout<<"NO";return;}


cout<<"YES";

}


int main(){
God_Speed

int t=1;
//cin >> t;

while (t--) {


I_still_love_her();

cout<<nl;
}

return 0;
}