#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N];
void vishal()
{
    int n;
    cin >> n;
    bool ok = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = a[0], r = a[0];
    for (int i = 1; i < n; i++)
    {

        if (a[i] == l - 1)
            l--;
        else if (a[i] == r + 1)
            r++;
        else
        {
            ok = 0;
            break;
        }
    }

    cout<<(ok?"YES":"NO");
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