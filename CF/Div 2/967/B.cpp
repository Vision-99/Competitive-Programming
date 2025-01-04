#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) {

int n;
cin>>n;

if(n%2==0){
    cout<<-1;
}
else{
    for(int i=1;i<=n/2;i++){
        cout<<i<<" ";
    }
    for(int i=n;i>n/2;i--){
        cout<<i<<" ";
    }
}

cout<<endl;
}

return 0;
}