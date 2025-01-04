#include <bits/stdc++.h>
using namespace std;
int main()
{

string s,t="hello";

cin>>s;

for(int i=0,j=0;i<s.size();i++){
    if(s[i]==t[j])  j++;
    if(j==5){
        cout<<"YES\n";
        return 0;
    }
}
cout<<"NO\n";
return 0;
}