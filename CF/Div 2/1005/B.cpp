// Valar Morghulis
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i,n) for(ll i=0;i<n;i++)
#define nl "\n"
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define YR {cout<<"YES";return;}
#define NR {cout<<"NO";return;}

using vi = vector<ll>;

struct N { int mx, idx; };

struct ST {
    int n;
    vector<N> t;
    vector<int> lz;
 
    ST(int n): n(n) {
        t.resize(4*n);
        lz.assign(4*n, 0);
        build(1, 1, n);
    }
 
    void build(int i, int l, int r) {
        if(l == r) { t[i] = {l, l}; return; }
        int m = (l+r)/2;
        build(i*2, l, m);
        build(i*2+1, m+1, r);
        t[i] = cmb(t[i*2], t[i*2+1]);
    }
 
    N cmb(const N &L, const N &R) {
        if(L.mx > R.mx) return L;
        if(L.mx < R.mx) return R;
        return (L.idx < R.idx) ? L : R;
    }
 
    void apply(int i, int l, int r, int v) {
        t[i].mx += v;
        lz[i] += v;
    }
 
    void push(int i, int l, int r) {
        if(lz[i]) {
            int m = (l+r)/2;
            apply(i*2, l, m, lz[i]);
            apply(i*2+1, m+1, r, lz[i]);
            lz[i] = 0;
        }
    }
 
    void upd(int i, int l, int r, int ql, int qr, int v) {
        if(ql > r || qr < l) return;
        if(ql <= l && r <= qr) { apply(i, l, r, v); return; }
        push(i, l, r);
        int m = (l+r)/2;
        upd(i*2, l, m, ql, qr, v);
        upd(i*2+1, m+1, r, ql, qr, v);
        t[i] = cmb(t[i*2], t[i*2+1]);
    }
 
    N qry(int i, int l, int r, int ql, int qr) {
        if(ql > r || qr < l) return {-1000000000, 1000000000};
        if(ql <= l && r <= qr) return t[i];
        push(i, l, r);
        int m = (l+r)/2;
        return cmb(qry(i*2, l, m, ql, qr), qry(i*2+1, m+1, r, ql, qr));
    }
 
    void rng_upd(int ql, int qr, int v) { if(ql <= qr) upd(1, 1, n, ql, qr, v); }
    N rng_qry(int ql, int qr) { return qry(1, 1, n, ql, qr); }
};





void I_still_love_her() {
    int n; cin >> n;
    vi a(n+1); fl(i, n) cin >> a[i+1];
    vi f(n+1, -1), lst(n+1, -1);
    
    fl(i, n) { int x = a[i+1]; if(f[x] == -1) f[x] = i+1; lst[x] = i+1; }
    
    vector<vi> ev(n+1);
    int d = 0;
    fl(x, n+1) if(f[x] != -1) { d++; ev[lst[x]].pb(f[x]); }
    
    ST seg(n);
    int A = 0, bf = -1000000000, bl = -1, br = -1;
    
    for(int r = 1; r <= n; r++) {
        for(int L : ev[r]) { A++; if(L < n) seg.rng_upd(L+1, n, -1); }
        N cnd = seg.rng_qry(1, r);
        int cf = A - (r + 1) + cnd.mx;
        if(cf > bf || (cf == bf && bf != -1000000000 && (r - cnd.idx + 1) > (br - bl + 1))) {
            bf = cf; bl = cnd.idx; br = r;
        }
    }
    cout << (bf < 0 ? "0" : to_string(bl) + " " + to_string(br));
}




int main() {
    God_Speed
    int t = 1;
    cin >> t;
    while (t--) { I_still_love_her(); cout << nl; }
    return 0;
}
