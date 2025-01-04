#include <iostream>
#include <string>
#include <vector>
using namespace std;

string checkParityOccurrence(int n, string s) {
    // Create vectors to store odd and even indices for each character
    vector<bool> hasOdd(26, false);  // For lowercase letters
    vector<bool> hasEven(26, false); // For lowercase letters
    
    // Iterate through the string
    for(int i = 0; i < n; i++) {
        int charIndex = s[i] - 'a';  // Convert char to 0-25 index
        
        // Check if position is odd or even
        if(i % 2 == 0) {
            hasEven[charIndex] = true;
        } else {
            hasOdd[charIndex] = true;
        }
    }
    
    // Check if any character appears in both odd and even positions
    for(int i = 0; i < 26; i++) {
        if(hasOdd[i] && hasEven[i]) {
            return "no";
        }
    }
    
    return "yes";
}

int main() {
    int n;
    string s;
    
    // Input
    cin >> n;
    cin >> s;
    
    // Output result
    cout << checkParityOccurrence(n, s) << endl;
    
    return 0;
}