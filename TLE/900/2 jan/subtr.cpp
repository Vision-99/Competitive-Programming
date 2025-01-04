#include <bits/stdc++.h>
using namespace std;
int main()
{


string s="abababaaz",ans;
int nf=4,n=s.size();

int m=n-nf+1;
for(int i=0;i<n;i++){
    string sub =s.substr(i,m);
    ans = max(ans,sub);
}

cout<<ans;

return 0;
}