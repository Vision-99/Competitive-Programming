#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
int ans=0;

while (n--) {


vi a(3);

fl(i,3){
    cin>>a[i];
}

if( a[0] + a[1] + a[2] >= 2)    ans++;


}

cout<<ans;

return 0;
}