#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fl(i,a,n) for(ll i=a;i<n;i++)
#define fle(i,a,n) for(ll i=a;i<=n;i++)
#define nl endl
#define pb push_back
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define God_Speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define YR {cout<<"YES";return;}
#define NR {cout<<"NO";return;}
using vi = vector<ll>;
void input(vector<ll>& a,ll n){fl(i,0,n)cin>>a[i];}
void I_still_love_her(){
 string s;cin>>s;
 ll l=s.size();
 bool a=1;
 for(ll i=1;i<l;i++){if(s[i]==s[i-1]){a=0;break;}}
 if(a){cout<<0;return;}
 ll z=0,o=0; for(auto c:s){if(c=='0')z++;else o++;}
 if(l%2==0) cout<<(z==o?1:2);
 else{ ll r=(l+1)/2, t=l-r; cout<<(((z==r && o==t)||(z==t && o==r))?1:2); }
}
int main(){
 God_Speed
 int t=1;cin>>t;
 while(t--){ I_still_love_her(); cout<<nl; }
 return 0;
}