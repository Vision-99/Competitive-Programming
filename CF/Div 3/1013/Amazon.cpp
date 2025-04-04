#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> ans(26,INT_MAX);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vector<int> a(26);
        for(auto c:s) a[c-'a']++;
        for(int i=0;i<26;i++){
            ans[i] = min(ans[i],a[i]);
        }
        
    }
    int sum=0;
    for(int i=0;i<26;i++){
        if(ans[i]==INT_MAX) continue;
        else sum+=ans[i];
    }
    cout<<sum;
    return 0;

}