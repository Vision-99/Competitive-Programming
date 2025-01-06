#include <bits/stdc++.h>
using namespace std;

using ll = long long;




void I_still_love_her(){

ll n;
cin>>n;

ll ans=0;
// find Quotient when divided with  max divisor
for(ll d=2;d<=n*n;d++) if(n%d==0) ans= max(ans,n/d);
cout<<ans<<" "<<n-ans;


}


int main(){

int t=1;
cin >> t;

while (t--) {


I_still_love_her();

cout<<endl;
}

return 0;
}