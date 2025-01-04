#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) {

int n,k;

cin>>n>>k;

vi a(n);

fl(i,n){
    cin>>a[i];
}

sort(a.rbegin(),a.rend());

int ans=0;

fl(i,n){
    if(i&1){
        ans -=a[i];
    }
    else{
        ans += a[i];
    }
}

  vi b;
    for(int j=1;j<n;j+=2)
        b.push_back(a[j-1]-a[j]);
    
    ans-=min(k,accumulate(begin(b), end(b),0));

    cout<<ans;

cout<<endl;
}

return 0;
}