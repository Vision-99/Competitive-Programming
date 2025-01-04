#include <bits/stdc++.h>
using namespace std;
int main()
{

char x='y'+'z';  // 121 + 122 =243 = ≤
char x='ó'+'ó';  // 243 + 243 =486  overflow bitch
cout<<x;

return 0;
}
