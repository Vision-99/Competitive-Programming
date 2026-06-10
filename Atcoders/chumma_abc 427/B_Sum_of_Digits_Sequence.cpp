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



int dsum(int x){
    int sm=0;
    if(x==0) return 1;
    while (x)
    {
        sm += x%10;
        x/=10;
    }
    return sm;
    
}


void I_still_love_her() {
    int n;cin>>n;
    vector<int> a;
    if (n >= 0) a.push_back(1);
    if (n >= 1) a.push_back(dsum(a[0]));

    for (int i = 2; i <= n; i++) a.push_back(a[i - 1] + dsum(a[i - 1]));
    cout<<a[n];
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