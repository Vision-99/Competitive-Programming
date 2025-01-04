#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solve(string s, string t) {
    int s_len = s.length();
    int t_len = t.length();
    int t_idx = 0;

    for (int i = 0; i < s_len && t_idx < t_len; i++) {
        if (s[i] == '?') {
            s[i] = t[t_idx];
            t_idx++;
        } else if (s[i] == t[t_idx]) {
            t_idx++;
        }
    }

    if (t_idx == t_len) {
        for (char &c : s) {
            if (c == '?') c = 'a';
        }
        return s;
    } else {
        return "NO";
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;

        string result = solve(s, t);
        if (result == "NO") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl << result << endl;
        }
    }

    return 0;
}