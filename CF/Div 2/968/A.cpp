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

int n;
cin>>n;

string s;

cin>>s;


if(s[0]==s[n-1])  cout<<"NO";
else    cout<<"yes";


cout<<endl;
}

return 0;
}