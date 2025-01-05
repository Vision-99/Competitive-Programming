#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 +7;
using ll = long long;

ll powm(ll x,ll n){
    x%=mod;
    if(n==0) return 1;
    if(n==1) return x;

    ll ans=powm(x*x,n/2);
    if(n&1) return x*ans % mod;
    else return ans;
}




int main()
{

ll x,n;
cin>>x>>n;

cout<<powm(x,n);


return 0;
}