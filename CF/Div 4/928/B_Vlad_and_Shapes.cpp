#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fl(i, n) for (ll i = 0; i < n; i++)
#define nl endl

void I_still_love_her()
{

    int n;
    cin >> n;
    vector<string> s;
    int f=0;
    for(int i=0;i<n;i++)
    {
        
        string z;
        cin>>z;
        s.push_back(z);
        
    }

    fl(i,n){
        ll c=0;
        fl(j,n){
            if(s[i][j]=='1')    c++;
        }
        if(c==1) {cout<<"TRIANGLE";return;}
    }

    cout<<"SQUARE";        
}

int main()
{

    int t = 1;
    cin >> t;

    while (t--)
    {

        I_still_love_her();

        cout << nl;
    }

    return 0;
}