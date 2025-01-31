#include <bits/stdc++.h>
using namespace std;


int main()
{

vector<int> a(8);

for(int i=0;i<8;i++){
    a[i]=107*(i+1);
}

cout<<"Idael Sleeping Time\n\n";

for(int i=0;i<8;i++){
    cout<<a[i]/60<<"Hr  :  "<<a[i]%60<<"Min"<<endl;
}


return 0;
}