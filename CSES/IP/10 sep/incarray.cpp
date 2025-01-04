#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 



using vi = vector<ll>;

ll ceil(ll a, ll b){ll ans = (a + b - 1) / b;return ans;}

ll gcd(ll a, ll b) {while (b != 0) {ll temp = b;b = a % b;a = temp;}return a;}

ll max(ll a, ll b, ll c){return max(a,max(b,c));}

ll min(ll a, ll b, ll c){return min(a,min(b,c));}

ll vmax(vector<ll>& a){return *max_element(a.begin(),a.end());}

ll vmin(vector<ll>& a){return *min_element(a.begin(),a.end());}

ll vsum(vector<ll>& a){ll sum=0;for(ll c:a)sum+=c;return sum;}

void input(vector<ll>& a,ll n){fl(i,n)cin>>a[i];}





void solve(){

ll n;
cin>>n;

vi a(n);
input(a,n);

ll ans=0,diff=0;

fl(i,n-1){
    if(a[i]<a[i+1]) continue;
    else{
        diff = a[i] - a[i+1];
        ans = ans +  diff;
        a[i+1] +=diff;
    }
}
cout<<ans;
//fl(i,n) cout<<a[i]<<" ";



}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
//cin >> t;

while (t--) {


solve();

cout<<endl;
}

return 0;
}