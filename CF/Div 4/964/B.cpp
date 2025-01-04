#include <bits/stdc++.h>
using namespace std;


int main(){

int t;
cin >> t;

while (t--) {

    int a,A,b,B;

    cin>>a>>A>>b>>B;

    int ans=0;

    if(a>b && A>B)
        ans+=2;
    
    if(A>b && a>B)
        ans+=2;
    
    
    cout<<ans;


    cout<<'\n';

}

return 0;
}


