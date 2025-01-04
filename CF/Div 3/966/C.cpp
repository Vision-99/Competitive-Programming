#include <bits/stdc++.h>
using namespace std;

const int M = 2e5 +5;

int a[M];
int c[M];
int v[M];
map<int,int> p;

void vishal()
{
    int n, m;

    

    cin >> n;

    for (int i = 1; i <=n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 1; i <= m; i++){
        string s;
        cin>>s;
        p.clear();
        if(s.size()!=n){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<=26;i++){
            v[i]=false;
        }

        bool flag=true;

        for(int i=0;i<n;i++){
            int d = s[i] - 'a';
            if(!v[d]){
                if(p[a[i=1]])   flag =false;
                p[a[i=1]] = true;
                v[d]=true;
                c[d]=a[i+1];
            }

            flag & (c[d]==a[i+1]);
        }

        if(flag){
            cout<<"YES\n";
        }
        else    cout<<"NO\n";
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        vishal();

        cout << endl;
    }

    return 0;
}