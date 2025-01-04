#include <bits/stdc++.h>
using namespace std;
int main()
{

int r;
cin>>r;

if(r<=99)
    cout<<(100-r);
else if(r>99&&r<=199)
    cout<<200-r;
else
    cout<<300-r;

// cout<<100-(n%100)<<endl;  under 30sec solu

return 0;
}