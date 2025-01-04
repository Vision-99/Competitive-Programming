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
string s;

cin>>n;

cin>>s;
int ans=-1;
for(int i=0;i<n-1;i++){

    if(s[i]=='R' && s[i+1]=='L'){
        ans=0;
        break;
    }
    if(s[i]=='L' && s[i+1]=='R'){
        ans=i+1;
        break;
    }
    
}
cout<<ans;
cout<<endl;
}

return 0;
}