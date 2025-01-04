#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end() 



using vi = vector<int>;
using ll = long long;

int ceil(int a, int b){int ans = (a + b - 1) / b;return ans;}

int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}

int max(int a, int b, int c){return max(a,max(b,c));}

int min(int a, int b, int c){return min(a,min(b,c));}

int vmax(vector<int>& a){return *max_element(a.begin(),a.end());}

int vmin(vector<int>& a){return *min_element(a.begin(),a.end());}

int vsum(vector<int>& a){int sum=0;for(int c:a)sum+=c;return sum;}

void input(vector<int>& a,int n){fl(i,n)cin>>a[i];}





void solve(){

int n;
cin>>n;


string s;

cin>>s;

cout<<s[n-1];

}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
cin >> t;

while (t--) {


solve();

cout<<endl;
}

return 0;
}