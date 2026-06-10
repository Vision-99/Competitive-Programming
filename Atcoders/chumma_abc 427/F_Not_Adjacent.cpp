#include <bits/stdc++.h>
using namespace std;

#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
// Golden Rules
/*
    Solutions are simple.
    Proofs are simple.
    Implementations are simple.
*/

/*
    
    
*/
void I_still_love_her() {
    int n,m;cin>>n>>m;

    vector<int> a(n);
    for(auto &x:a) cin>>x;

    int ans=0;

    for(int mask=0;mask<(1<<n);mask++){
        int sm=0;
        // no adjecent ele allowed
        for(int i=0;i<n;i++){
            if(mask & (1<<i)) sm += a[i];
        }
        if(sm%m==0) ans++;
    }
    cout<<ans;
}

int32_t main() {
    God_Speed
    int t = 1;
    // cin >> t;
    while (t--) {
        I_still_love_her();
        cout << '\n';
    }
    return 0;
}