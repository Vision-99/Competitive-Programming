#include <bits/stdc++.h>
using namespace std;
#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        int ans=0;
        
        vector<int> a(n);
        for (int i = 1; i <=n; i++) {
            int x;
            cin>>x;
            ans= max(ans,x);
        }
        
       

        while (m--) {
            char c;
            int l, r;
            cin >> c >> l >> r;

            if(l<= ans && ans<=r){
                if(c=='-')  ans--;
                else    ans++;
            }

            cout<<ans<<" ";            
            }
            
         
        cout << endl;
    }
    
    return 0;
}
