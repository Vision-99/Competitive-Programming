#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<int> a(n);

    for(auto &x:a) cin>>x;

    int ans=0;

    for(auto x:a) ans|=x;

    cout<<ans;


return 0;
}