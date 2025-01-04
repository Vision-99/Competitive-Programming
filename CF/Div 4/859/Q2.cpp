#include <bits/stdc++.h>
using namespace std;

// Find the Lexicographically Largest String From the Box I

class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.length();
        string result = "";
        
        // Try all possible starting positions
        for(int start = 0; start < n; start++) {
            // Try all possible lengths from this position
            for(int len = 1; len <= n - start; len++) {
                // Check if remaining string has enough characters for other friends
                int remainingLen = n - (start + len);
                if (remainingLen >= numFriends - 1) {
                    result = max(result, word.substr(start, len));
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    cout << sol.answerString("dbca", 2) << endl;  // Expected: "dbc"
    cout << sol.answerString("gggg", 4) << endl;  // Expected: "g"
    return 0;
}