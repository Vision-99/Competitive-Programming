#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--){
		long long int n,k;
		cin>>n>>k;
		long long int ans=(k+k+n-1)*n/2;
		long long int l=-1;
		long long int r=n;
		while(l+1<r){
			long long int m=(l+r)>>1;
			if((k+k+m)*(m+1)<=ans) l=m;
			else r=m;
		}
		cout<<min(ans-(k+k+l)*(l+1),(k+k+r)*(r+1)-ans)<<endl;
	}
}