#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

int x=0;
while(n>0){
    x^=n;
    n--;
}
cout<<x;
return 0;
}