
// Author: Vishal Shrivastav
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

vi p(n);
vi F(n,0);
vector<bool> v(n,false);
string s;

fl(i,n){
    cin>>p[i];
    p[i]--;
}

cin>>s;

fl(i,n){
    if(!v[i]){
        vi c;
        int bc=0;
        int x=i;

        while(!v[x]){
            v[x] = true;
            c.push_back(x);
            if(s[x]=='0')   bc++;
            x=p[x];
        }

        for(int idx : c){
            F[idx]=bc;        
    }
    }    
}
fl(i,n) cout<<F[i]<<" ";

cout<<endl;
}

return 0;
}