
// Author: Vishal Shrivastav
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

int a,b;
cin>>a>>b;

if(a%2==0 && (b%2==0||a!=0))    cout<<"YES";
else    cout<<"NO";


cout<<endl;
}

return 0;
}