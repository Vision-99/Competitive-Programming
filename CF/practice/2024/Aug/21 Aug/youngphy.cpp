#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
int x=0,y=0,z=0;

while (n--) {

vi a(3);

fl(i,3){cin>>a[i];}

x+=a[0];
y+=a[1];
z+=a[2];


}

if(x==0&&y==0&&z==0)    cout<<"YES";
else    cout<<"NO";


cout<<endl;
return 0;
}