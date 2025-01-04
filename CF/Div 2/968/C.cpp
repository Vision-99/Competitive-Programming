#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string reorder_string(string s) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    
    int max_freq = 0;
    char max_char = 'a';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = 'a' + i;
        }
    }
    
    string result(s.length(), max_char);
    int index = 0;
    
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        if (c != max_char) {
            for (int j = 0; j < freq[i]; j++) {
                if (index >= s.length()) {
                    index = 1;
                }
                result[index] = c;
                index += 2;
            }
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << reorder_string(s) << endl;
    }
    
    return 0;
}