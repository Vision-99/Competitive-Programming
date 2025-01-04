#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximal score_n - score_c difference for a specific letter
int calculateMaxDifference(const vector<string>& strings, char target) {
    vector<int> diffs;
    int total_diff = 0;
    
    // Calculate the balance for each string
    for (const string& s : strings) {
        int target_count = count(s.begin(), s.end(), target);
        int other_count = s.length() - target_count;
        diffs.push_back(2 * target_count - s.length());
    }
    
    // Sort differences in decreasing order
    sort(diffs.rbegin(), diffs.rend());
    
    int current_sum = 0;
    int max_count = 0;
    
    // Accumulate the best differences while they are positive
    for (int diff : diffs) {
        current_sum += diff;
        if (current_sum > 0) {
            max_count++;
        } else {
            break;
        }
    }
    
    return max_count;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }
    
    // Try each of the 5 characters 'n', 'a', 'r', 'e', 'k' to maximize the difference
    int max_diff = 0;
    vector<char> targets = {'n', 'a', 'r', 'e', 'k'};
    
    for (char target : targets) {
        max_diff = max(max_diff, calculateMaxDifference(strings, target));
    }
    
    cout << max_diff << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
