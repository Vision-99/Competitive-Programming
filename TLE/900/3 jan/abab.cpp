#include <bits/stdc++.h>
using namespace std;
int main()
{

string s;
cin>>s;

int n=s.size();
int ans=0;
for(int i=0;i+1<n;i++){
if(s[i]=='a' and s[i+1]=='b') ans++;

}

cout<<ans;
return 0;
}