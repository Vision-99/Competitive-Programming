#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ds(ll x1,ll y1,ll x2, ll y2){
    ll dx = x2 -x1;
    ll dy = y2 -y1;

    return dx*dx + dy*dy;
}


int main(){

int t;
cin >> t;

while (t--) {

    ll n,i,flag =0;

    cin>>n;
    ll a[n],b[n];

    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    ll xs,ys,xd,yd;

    cin>>xs>>ys>>xd>>yd;

    ll comp = ds(xs,ys,xd,yd);

    for(i=0;i<n;i++){
        if(comp >= ds(a[i],b[i],xd,yd)){
            flag=1;
            break;
        }
    }

    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";

}

return 0;
}