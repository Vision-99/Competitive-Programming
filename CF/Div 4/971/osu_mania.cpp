#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vi a;

    int x=n;

    while(x--){
        string s;
        cin>>s;

        fl(i,4){
            if(s[i]=='#')
                a.push_back(i+1);
        }
    }

    for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout<<endl;
    }

    return 0;
}
