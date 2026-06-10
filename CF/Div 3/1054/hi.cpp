#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> nums = {1,2,3,4,5};
    int n=nums.size();

vector<int> pre(n+1),suff(n+1);

// array sum = pre[ind] + suff[ind]
for(int i=0;i<n;i++) pre[i+1] = pre[i] + nums[i]; // till i-1
for(int i=n-1;i>=0;i--) suff[i] = suff[i+1] + nums[i]; // till i from back

cout<<pre[1]+suff[1]; // ( a[0]) + (a[1]+ ... + a[n-1])

}