#include <bits/stdc++.h>
using namespace std;


int main(){

int t;
cin >> t;

while (t--) {

    int n,m,k;
    cin>>n>>m>>k;

    cout<<min(n,k)*min(m,k)<<'\n';


}

return 0;
}