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
    all num that come in pair are welcome and ony 2 num with odd freq can come, so choose all even freq 
    and choose those odd such that , num < sum of all pair + other oddFreq num
    
*/
void I_still_love_her() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;

    unordered_map<int,int> f;
   
    for(auto x:a) f[x]++;

    // pairs_full = total length contributed by pairs (both sides),
    // i.e. sum over lengths (floor(cnt/2) * 2 * val)
    int pairs_full = 0;
    int pair_cnt = 0;
    int max_pair_val = 0;
    vector<int> singles; // leftover singles (one per length with odd count)

    for (auto &kv : f) {
        int val = kv.first;
        int cnt = kv.second;
        int p = cnt / 2;
        if (p > 0) {
            pairs_full += (int)p * 2 * val;
            pair_cnt += p;
            max_pair_val = max(max_pair_val, val);
        }
        if (cnt % 2 == 1) singles.push_back(val);
    }

    sort(all(singles));

    int ans = 0;

    // Case 1: use only pairs (must be non-degenerate & strictly convex)
    // need at least two pairs and largest single-side length < sum of all other sides
    // For pairs-only polygon, condition reduces to: 2 * max_pair_val < pairs_full
    if (pair_cnt >= 2) {
        if (2 * max_pair_val < pairs_full) ans = max(ans, pairs_full);
    }

    // Case 2: line of symmetry intersects exactly one stick (one odd)
    // can use any leftover single; condition (editorial): odd < pairs_full
    // (pairs_full is total length of pairs, i.e., both sides)
    if (!singles.empty() && pairs_full > 0) {
        for (int x : singles) {
            if (x < pairs_full) ans = max(ans, pairs_full + x);
        }
    }

    // Case 3: symmetry intersects exactly two sticks (two odds)
    // consider adjacent pairs in sorted singles: if (larger - smaller) < pairs_full
    if ((int)singles.size() >= 2 && pairs_full > 0) {
        for (size_t i = 1; i < singles.size(); ++i) {
            int s = singles[i-1];
            int l = singles[i];
            if (l - s < pairs_full) ans = max(ans, pairs_full + l + s);
        }
    }

    cout<<ans;
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