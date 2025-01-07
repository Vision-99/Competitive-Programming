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

string s;
cin>>s;
int n= s.size();
if(n>10)
    cout<<s[0]<<n-2<<s[n-1];

else    cout<<s;
cout<<endl;
}

return 0;
}