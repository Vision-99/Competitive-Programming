#include <bits/stdc++.h>
using namespace std;
int main()
{

int x;
cin>>x;

//cout<<__builtin_popcount(x);
int ans=0;
while(x>0){
if(x&1) ans++;
x/=2;
}
cout<<ans;
return 0;
}