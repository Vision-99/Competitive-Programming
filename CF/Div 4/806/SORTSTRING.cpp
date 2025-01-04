#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<string> s={ "abc","c","bcad"};//abc bcad c
sort(s.begin(),s.end());

for(auto x:s) cout<<x<<" ";

return 0;
}