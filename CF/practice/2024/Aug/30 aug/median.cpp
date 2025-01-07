// #include <bits/stdc++.h>
// using namespace std;

// #define fl(i,n) for(int i=0;i<n;i++)

// using vi = vector<int>;
// using ll = long long;




// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// int t;
// cin >> t;

// while (t--) {

// int n;
// cin>>n;

// vi a(n);

// fl(i,n){
//     cin>>a[i];
// }
// sort(a.begin(),a.end());
// int om= a[(n-1)/2];
// int f=1,ans=0;
// while(f){
//     a[(n-1)/2]++;
//     ans++;
//     sort(a.begin(),a.end());

//     int nm = a[(n-1)/2];
//     if(nm - om == 1)    f=0;

// }

// cout<<ans;
// cout<<endl;
// }

// return 0;
// }  // gave TLE as expected so BF doesn't work
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

vi a(n);

fl(i,n){
    cin>>a[i];
}
sort(a.begin(),a.end());

int ans=0;

int om = a[(n-1)/2];

for (int i = (n-1)/2; i < n; i++)
{
    if(a[i]==om)    ans++;
}

cout<<ans;
cout<<endl;
}

return 0;
}