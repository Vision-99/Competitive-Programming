#include<bits/stdc++.h>
using namespace std;
int main(){
   
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  
  sort(a.rbegin(), a.rend());
  cout << max(0, t - a[p - 1]) << '\n';
  
  
  return 0;
}