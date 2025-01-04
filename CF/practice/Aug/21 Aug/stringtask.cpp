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

    // Convert each character to lowercase
    for (char &c : s) {
        c = tolower(c);
    }

    for (int i = 0; i < s.size(); ) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'y') {
            s.erase(s.begin() + i);
        } else {
            i++; // Only increment if no erase happened
        }
    }

    for(int i=0;i<s.size();i++){
        cout<<"."<<s[i];
    }
    cout<<endl;
return 0;
}