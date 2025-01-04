#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;

void vishal(){

    int n;
    cin>>n;

    vi a(n);

    fl(i,n){
        cin>>a[i];
    }

    if(n==2 && a[1]-a[0]>1) cout<<"YES";
    else    cout<<"NO";

}

int main(){

int t;
cin >> t;

while (t--) {

vishal();

cout<<endl;
}

return 0;
}