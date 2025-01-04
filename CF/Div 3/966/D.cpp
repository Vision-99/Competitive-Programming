#include <bits/stdc++.h>
using namespace std;

void vishal(){


    int n;
    cin>>n;

    vector<int> a(n);
    int sum =0;

    for(int i=0;i<n;i++){

        cin>>a[i];
        sum += a[i];

    }

    string dir;
    cin>>dir;

    int ans=0,L=0,R=n-1;

    while(R>L){
        while(dir[L]=='R'){
            sum -= a[L];
            L++;
        }
        while(dir[R]=='L'){
            sum -= a[L];
            R--;
        }

        if(R<L) break;

        ans += sum;
        sum -= a[L];
        L++;
        sum -= a[R];
        R--;
    }


    cout<<ans;


}

int main(){

int t;
cin >> t;

while (t--) {

vishal();

cout<<endl;
}

return 0;
}