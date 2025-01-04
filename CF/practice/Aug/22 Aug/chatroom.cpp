#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int n=s.size();

int h=0,e=0,l1=0,l2=2,o=0;

fl(i,n){

    if(s[i]=='h'&&h==0){
        h=i;
    }
    else if(s[i]=='e'&&e==0){
        e=i;
    }
    else if(s[i]=='l'&&l1==0){
        l1=i;
    }
    else if(s[i]=='l'&&l2==0){
        l2=i;
    }
    else if(s[i]=='o'&&o==0){
        o=i;
    }
}
// cout<<h<<":"<<e<<":"<<l1<<":"<<l2<<":"<<o;
if(h<e && e<l1 && l1<l2&& l2<o) cout<<"YES";
else    cout<<"NO";
cout<<endl;


return 0;
}