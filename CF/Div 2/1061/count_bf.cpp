#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;

    vector<int> a(n);
    for(auto &x:a) cin>>x;

    int ans=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum >0) ans++;
        }
    }
    cout<<ans;

}