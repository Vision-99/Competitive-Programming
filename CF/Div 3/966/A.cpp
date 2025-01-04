#include <bits/stdc++.h>
using namespace std;

void vishal()
{

    string s;
    cin >> s;
    int n=s.size();

    if(n<3)
        cout<<"NO";
    
    else{
        if(s[0] == '1' && s[1] == '0' && (n==3 && s[2]> '1' || n>3 && s[2]> '0'))
            cout<<"YES";
        else
            cout<<"NO";
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