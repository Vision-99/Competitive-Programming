#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s="hello";

    int x;
    cin>>x;
    s.resize(x);
    cout<<s;

    // 'h' 'e' 'l' 'l' 'o' '\0' '\0'  for x==7 , two null char added
    // x<0 not allowed


return 0;
}