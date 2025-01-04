#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;

void solve(){


		int n = 0;
		cin >> n;
		int grid[n + 1][2];
		memset(grid, 0, sizeof(grid));
		int x = 0;
		int y = 0;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
 
			grid[x][y] = 1;
		}
 
		ll answer = 0;
		for (int i = 0; i <= n; i++) {
			if (grid[i][0] == 1 && grid[i][1] == 1) answer += n - 2;
 
			if (i + 2 > n) continue;
 
			answer += (grid[i][0] == 1 && grid[i + 2][0] == 1 && grid[i + 1][1] == 1);
			answer += (grid[i][1] == 1 && grid[i + 2][1] == 1 && grid[i + 1][0] == 1);
		}
		cout << answer;


}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) {


solve();

cout<<endl;
}

return 0;
}