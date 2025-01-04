#include <bits/stdc++.h>
using namespace std;
int main()
{

long long n;
cin>>n;
long long x=0;
while(n--) x=10*x+1;

cout<<x%7;


return 0;
}