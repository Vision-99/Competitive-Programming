#include <bits/stdc++.h>
using namespace std;
int main()
{

string s;
cin>>s;

int ans=0,n=s.size();

for(int i=n-1;i>=0;i--) ans+= (s[i]-'0')*(1<<(n-i-1));    

cout<<ans;

}
