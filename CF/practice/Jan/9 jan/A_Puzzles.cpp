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



void input(vector<ll>& a,ll n){fl(i,n)cin>>a[i];}





void I_still_love_her(){

ll n,m;
cin>>n>>m;

vi a(m);
input(a,m);

ll ans=INT_MAX;
sort(all(a));
for(ll i=0;i<=m-n;i++) ans= min(ans,a[n-1+i]-a[i]);

cout<<ans;


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