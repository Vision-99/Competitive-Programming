#include <bits/stdc++.h>
using namespace std;




string shiftLetters( string& s, const vector<int>& shifts) {
    
    for (size_t i = 0; i < s.size(); ++i)
        s[i] = (s[i] - 'a' + shifts[i]) % 26 + 'a';  // forward    
        //s[i]= ((s[i] - 'a' -shifts[i])%26 +26)%26 +'a';   // backword---> 
    return s; 
}

int main() {
    string s = "abc";
    vector<int> shifts = {3, 5, 9}; 
    
    string result = shiftLetters(s, shifts); 
    
    cout <<result << endl;
    
    return 0;
}