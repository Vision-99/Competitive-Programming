#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

vi a ={4,7,44,77,47,74,447,474,444,774,744,747,477,777};
int z= a.size();
fl(i,z){
    if(n%a[i]==0) {
        cout<<"YES";
        return 0;
    }
}

cout<<"NO";

cout<<endl;


return 0;
}