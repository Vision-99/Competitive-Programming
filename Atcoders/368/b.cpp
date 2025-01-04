#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

vector<int> a(n);

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}


int ans=0,flag=1;

while(flag){

    sort(a.rbegin(),a.rend());
    if(a[0]==0 || a[1]==0){
        flag =0;
    }
    else{
        ans++;
        a[0]--;
        a[1]--;
    }

}
cout<<ans;

return 0;
}