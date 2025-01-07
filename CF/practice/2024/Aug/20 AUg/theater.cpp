#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
usig ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n,m,a;

cin>>n>>m>>a;


cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;
return 0;
}