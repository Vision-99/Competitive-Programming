#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;

cin>>s;

int n=s.size(),c0=0,c1=0,f=0;

fl(i,n){

    if(s[i]=='0'){
        c0++;
        c1=0;
    }   

    if(c0>=7){f=1;
        cout<<"YES";
        break;
    }

    if(s[i]=='1'){
        c1++;
        c0=0;
    }

    if(c1>=7){f=1;
        cout<<"YES";
        break;
    }
}

if(!f)  cout<<"NO";

cout<<endl;


return 0;
}

/* int main()
{
    cin >> s;
    int q = 1;
    for (int i = 1; i < sz(s); i++)
    {
        if (s[i] == s[i - 1])
            q++;
        else
            q = 1;
        if (q >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
 
    return 0;  ye bhi thik h , mera bhi thik h
}*/