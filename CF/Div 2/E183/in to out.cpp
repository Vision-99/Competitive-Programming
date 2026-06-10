#include <bits/stdc++.h>
using namespace std;


int main()


{

    int n;
    cin>>n;

    vector<int> temp(n);
    for(int i=0;i<n;i++) temp[i] = i+1;

    vector<int> perm(n);

    // 5 3 1 2 4 6
    // odd form back and even from front
    int j=0;
    for(int i=n-1;i>=0;i--){
        if(temp[i]&1) perm[j++]=temp[i];
    }

    for(int i=0;i<n;i++) if(temp[i]%2==0) perm[j++]= temp[i];

    for(auto x:perm) cout<<x<<" ";

    

}