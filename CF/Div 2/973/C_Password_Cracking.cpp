#include <iostream>
#include <string>
using namespace std;
#define nl endl
#define fl(i,n) for(int i=0;i<n;i++)
int que(string s) {
    cout << "? " << s << endl;
    cout.flush();
    int res;
    cin >> res;
    return res;
}

void solve(string s,int n) {
    string pass = "00";
    pass=s;
    int b=0;
    string a="";
    string be="";
    for(int i=0;i<n-2;i++){
        string cur1=pass + "0";
        string cur2=pass + "1";
        if(b==0){
            if(que(cur1))   pass=cur1;
            else if(que(cur2))  pass=cur2;
            else    b=1;
        }
    if(b==1){
        string c1 = "0" + pass;
        string c2 = "1" + pass;
        if(que(c1)) pass = c1;
        else    pass = c2;
    }
    }
cout<<"!"<<pass<<nl;
}

int main() {
    int t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            if(que("1"))    cout<<"! 1"<<nl;
            else    cout<<"! 0"<<nl;
            continue;
        }

        if(que("00"))   solve("00",n);
        else if(que("01"))   solve("01",n);
        else if(que("10"))   solve("10",n);
        else{
            string pass= "";
            fl(i,n){
                pass+"1";
            }
            cout<<"!"<<pass<<nl;
        }


    }
    
    return 0;
}
