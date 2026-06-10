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
    just peocess every bit seperatly 
    
*/
void I_still_love_her() {
    int x,y,z;
    cin>>x>>y>>z;
    int a=0,b=0,c=0;

    for(int i=0;i<30;i++){
        if( x & (1<<i)) { // if ith bit is set in x , it must be set in a and b both
            a |= (1<<i);
            b |= (1<<i);
        }
        if( y & (1<<i)) { // if ith bit is set in y , it must be set in b and c both
            b |= (1<<i);
            c |= (1<<i);
        }
        if( z & (1<<i)) { // if ith bit is set in z , it must be set in c and a both
            c |= (1<<i);
            a |= (1<<i);
        }
    }
    if((a&b)==x and (b&c)==y and (c&a)==z) cout<<"YES";
    else cout<<"NO";
}

int32_t main() {
    God_Speed
    int t = 1;
    cin >> t;
    while (t--) {
        I_still_love_her();
        cout << '\n';
    }
    return 0;
}