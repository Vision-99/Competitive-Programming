#include <bits/stdc++.h>
using namespace std;
int main()
{
int k,n;
cin>>n>>k;

vector<int> a(n);
int ans=0;

for(int i=0;i<n;i++){
    cin>>a[i];
   
}    
for(int i=0;i<n;i++){
    

    if(a[i]>=a[k-1] && a[i]>0)    ans++;
    
}    

cout<<ans<<'\n';

return 0;
}