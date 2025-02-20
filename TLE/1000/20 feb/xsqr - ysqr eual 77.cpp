#include <bits/stdc++.h>
using namespace std;


bool is_perfect_squre(int n){
    int x=sqrt(n);
    return x*x==n;
}

// number of int solution of x^2 - y^2 = 77

int main()
{

int max_diff_alowed=-1;
int i=2;
int prev=1,next=i*i;

while(next-prev < 77){
    i++;
    prev=next;
    next=i*i;
}
max_diff_alowed=i; // which is 39

int ans=0;

for(int i=9;i<=max_diff_alowed;i++){
    if(is_perfect_squre(i*i - 77)) ans+=4; // for all combinations
}
cout<<ans;
return 0;

}