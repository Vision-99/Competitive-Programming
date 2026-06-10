#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n=1000000;
    // cout<<log2(n)+1;
    int ans=0;

    for(int i=0;i<=19;i++) ans += 1<<i;
    cout<<ans;
    

}