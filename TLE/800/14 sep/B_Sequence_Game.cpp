#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 



using vi = vector<ll>;

ll fact(ll x){if(x==1 || x==0)return 1;else return x*fact(x-1);}
ll ncr(ll n, ll r){return(fact(n)/(fact(n-r)*fact(r)));}



ll ceil(ll a, ll b){ll ans = (a + b - 1) / b;return ans;}

ll gcd(ll a, ll b) {while (b != 0) {ll temp = b;b = a % b;a = temp;}return a;}

ll max(ll a, ll b, ll c){return max(a,max(b,c));}

ll min(ll a, ll b, ll c){return min(a,min(b,c));}

ll vmax(vector<ll>& a){return *max_element(a.begin(),a.end());}

ll vmin(vector<ll>& a){return *min_element(a.begin(),a.end());}

ll vsum(vector<ll>& a){ll sum=0;for(ll c:a)sum+=c;return sum;}

void input(vector<ll>& a,ll n){fl(i,n)cin>>a[i];}





void I_still_love_her(){

ll m;
cin>>m;
vi a(m);
input(a,m);

if(is_sorted(all(a))){
    cout<<m<<nl;
    fl(i,m) cout<<a[i]<<" ";
    return;
}

vi b;

b.pb(a[0]);

for(int i=1;i<m;i++){

if(b.back()>a[i]){
    b.pb(1);
}
b.pb(a[i]);

}

cout<<b.size()<<nl;
fl(i,b.size()) cout<<b[i]<<" ";
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