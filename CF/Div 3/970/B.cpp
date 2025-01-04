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

 int n; cin >> n;
    
    string s; cin >> s;
    
    string t = "";
    int k = sqrtl(n);
    if (k * k != n){
        cout << "No\n";
        continue;
    }
    
    fl(i,k) fl(j,k){
        if (i == 0 || j == 0 || i == k - 1 || j == k - 1) t += "1";
        else t += "0";
    }
    
  
    
    if (t == s) cout << "Yes";
    else cout << "No";


cout<<endl;
}

return 0;
}