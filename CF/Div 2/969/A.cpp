#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) {

int l,r;
cin>>l>>r;
int odd=0;

// if(l%2==0)  l++;

// cout<<(r-l+2)/4;

for(int i=l;i<=r;i++){
    if(i&1) odd++;
}

cout<<odd/2;
cout<<endl;
}

return 0;
}