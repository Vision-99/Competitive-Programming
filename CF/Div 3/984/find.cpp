#include <bits/stdc++.h>
using namespace std;
int main()
{


string a,b;

getline(cin,a);
getline(cin,b);
int index=-1;
int n=a.size(),m=b.size();
if (m == 0) {
    cout << "YES\nat 0";
    return 0;
}
int l=0;
for(int i=0;i<n;i++){
    if(a[i]==b[l]) l++;
    else l=0;

    if(l==m){        
        index=i-m+1;
        break;
    }
}

if(index!=-1){
    cout<<"YES\n";
    cout<<"at "<<index;
}
else{
    cout<<"NO";
}

return 0;
}