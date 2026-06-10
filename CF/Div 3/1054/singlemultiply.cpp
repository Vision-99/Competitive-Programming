#include <bits/stdc++.h>
using namespace std;

string singleMultiply(string s, char c) {
    int n = s.size();
    int d2 = c - '0'; // single digit
    int carry = 0;
    string ans;

    for (int i = n - 1; i >= 0; i--) {
        int d1 = s[i] - '0';
        int prod = d1 * d2 + carry;
        int digit = prod % 10;
        carry = prod / 10;
        ans = (char)(digit + '0') + ans;
    }

    if (carry) ans = (char)(carry + '0') + ans;
    return ans;
}


int main()
{
    
    string s;
    char c;
    cin>>s>>c;

    

    
    cout<<singleMultiply(s,c);

}