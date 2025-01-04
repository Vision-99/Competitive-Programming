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
int n;
cin>>n;

vi a(n);
vector<int> freq(101, 0); 

    
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        freq[a[i]]++;
    }

    sort(freq.rbegin(),freq.rend());

    cout<<n-freq[0];

cout<<endl;
}

return 0;
}