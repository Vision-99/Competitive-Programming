#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b;

cin>>a>>b;

int ans= 2;
if(a==b)    ans--;
if((a+b)%2==0)  ans++;

cout<<ans;

return 0;
}