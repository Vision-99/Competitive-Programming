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
    ll l, r;
    cin >> l >> r;
    ll diff = r - l;
    ll n = 1;
    while ((n * (n - 1) ) <= 2*diff) {
        n++;
    }
    cout << n -1 << '\n';
}
return 0;
}