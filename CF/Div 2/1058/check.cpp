#include <bits/stdc++.h>
using namespace std;

string bin(unsigned int n){
    string ans;
    while(n){
        ans = (char)('0' + (n&1)) + ans;
        n>>=1;
    }
    return ans;
}

int main()
{
    int x;
    cin>>x;

    unsigned int y = x;
    cout<<bin(y);
    

}