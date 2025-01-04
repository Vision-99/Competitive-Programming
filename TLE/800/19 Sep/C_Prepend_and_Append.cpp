#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 
#define rall(a) a.rbegin(),a.rend()



using vi = vector<ll>;

ll fact(ll x){if(x==1 || x==0)return 1;else return x*fact(x-1);}
ll ncr(ll n, ll r){return(fact(n)/(fact(n-r)*fact(r)));}
ll dist(ll x1,ll y1 ,ll x2,ll y2){return (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);}


ll ceil(ll a, ll b){ll ans = (a + b - 1) / b;return ans;}

ll gcd(ll a, ll b) {while (b != 0) {ll temp = b;b = a % b;a = temp;}return a;}

ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}

ll max(ll a, ll b, ll c){return max(a,max(b,c));}

ll min(ll a, ll b, ll c){return min(a,min(b,c));}

ll vmax(vector<ll>& a){return *max_element(a.begin(),a.end());}

ll vmin(vector<ll>& a){return *min_element(a.begin(),a.end());}

ll vsum(vector<ll>& a){ll sum=0;for(ll c:a)sum+=c;return sum;}

void input(vector<ll>& a,ll n){fl(i,n)cin>>a[i];}





void I_still_love_her(){
ll n;
cin>>n;
string a;
cin>>a;

int ans=0;
for(int i=0,j=n-1;i<n/2;i++,j--){

    if(a[i]!=a[j])  ans++;
    else    break;
}
cout<<n-2*ans;

}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
cin >> t;

while (t--) {


I_still_love_her();

cout<<endl;
}

return 0;
}