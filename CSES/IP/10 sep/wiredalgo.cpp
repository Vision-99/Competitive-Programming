#include <bits/stdc++.h>
using namespace std;
int main()
{


long long x;
cin>>x;
cout<<x<<" ";
while(x>1){
    if(x&1){
        x = x*3 +1;
    }
    else{
        x/=2;
    }

    cout<<x<<" ";
}



return 0;
}