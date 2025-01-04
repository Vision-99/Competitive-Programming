#include <bits/stdc++.h>
using namespace std;

#define fl(i, n) for (int i = 0; i < n; i++)

using vi = vector<int>;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi a(n);
        fl(i, n) {
            cin >> a[i];
        }

    sort(begin(a),end(a));

        // if(n%2==0)  cout << a[(n+1)/2] << endl;
        // else    cout<<a[(n-1)/2] << endl;// or just simply print a[n/2]

        cout<<a[n/2]<<endl;
    }

    return 0;
}
