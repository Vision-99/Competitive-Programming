#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;


int main(){

int t;
cin >> t;

while (t--) {

    int l1,l2,r1,r2;
    cin>>l1>>r1;
    cin>>l2>>r2;
 
    const int L=max(l1,l2),R=min(r1,r2);
 
    if(R<L){
        cout<<1<<endl;
        continue;
    }
 
    int ans = R-L;
    if(l1<L||l2<L)
        ans++;
    if(r1>R||r2>R)
        ans++;
 
    cout<<ans<<endl;
}

return 0;
}