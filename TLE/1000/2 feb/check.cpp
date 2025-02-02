#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<int> a={1,2,3,3,5,1,2,5,5,};

cout<<max_element(a.begin(),a.end()) - a.begin();

return 0;
}