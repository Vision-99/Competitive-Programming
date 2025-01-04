#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int s=sqrt(n);

    return (s*s ==n);
}

int main()
{

int n;
cin>>n;

cout<<check(n);

return 0;
}