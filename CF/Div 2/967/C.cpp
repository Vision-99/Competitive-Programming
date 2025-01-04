#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;

int q(int a, int b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
    int r;
    cin >> r;
    return r;
}

void function(int a, int b, vector<int>& vis, vector<pair<int, int>>& edges) {
    int x = q(a, b);
    if (x == a || x == b) {
        edges.push_back({a, b});
        vis[x] = 1;
        vis[b] = 1;
        return;
    }
    if (vis[a] && vis[x]) {
        function(x, b, vis, edges);
    } else {
        function(a, x, vis, edges);
        function(x, b, vis, edges);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << "! 1 2" << endl;
            cout.flush();
            continue;
        }

        vector<int> vis(n + 1, 0);
        vector<pair<int, int>> edges;

        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; ++j) {
                if (vis[j]) continue;
                function(i, j, vis, edges);
            }
        }

        cout << "!";

        for (const auto& edge : edges) {
            cout << " " << edge.first << " " << edge.second;
        }

        cout << endl;
        cout.flush();
    }

    return 0;
}
