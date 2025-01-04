#include <bits/stdc++.h>
using namespace std;
int main()
{

// idea : lotate k times clock wise and print 

int n,k;

cin>>n>>k;

vector<int> a(n);

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

    // reverse(a.begin(), a.end());
    // reverse(a.begin(), a.begin() + k);
    // reverse(a.begin() + k, a.end());



for (int i = n-k; i < n; i++)
{
    cout<<a[i]<<" ";
}
for (int i = 0; i < n-k; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}