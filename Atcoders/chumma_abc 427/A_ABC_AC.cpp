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
    string s;
    cin>>s;
    int n=s.size();
    s.erase(s.begin() + n/2);
    cout<<s;
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