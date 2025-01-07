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
int ans=0;
while (t--) {

vector<char> c(3);

fl(i,3){
    cin>>c[i];
}

if(c[1]=='+')   ans++;
else    ans--;


}
cout<<ans;
return 0;
}