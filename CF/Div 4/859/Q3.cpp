#include <bits/stdc++.h>
using namespace std;


// Count Special Subsequences

class Solution {
public:
    long long numberOfSubsequences(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        
        // Store pairs of indices for each ratio (num1,num2)
        // where ratio = num1/num2 to avoid floating point issues
        unordered_map<int, unordered_map<int, vector<pair<int,int>>>> ratios;
        
        // Generate first set of pairs (p,q)
        for(int p = 0; p < n-3; p++) {
            for(int q = p+2; q < n-1; q++) {
                ratios[nums[p]][nums[q]].push_back({p,q});
            }
        }
        
        // Check second set of pairs (r,s)
        for(int r = 2; r < n-1; r++) {
            for(int s = r+2; s < n; s++) {
                // Look for matching ratio nums[s]/nums[r] = nums[p]/nums[q]
                // Which means nums[s]*nums[q] = nums[r]*nums[p]
                auto& matches = ratios[nums[s]][nums[r]];
                for(auto& [p,q] : matches) {
                    if(p < q && q < r) {  // Ensure proper ordering
                        count++;
                    }
                }
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> test1 = {1,2,3,4,3,6,1};
    vector<int> test2 = {3,4,3,4,3,4,3,4};
    cout << sol.numberOfSubsequences(test1) << endl;  // Expected: 1
    cout << sol.numberOfSubsequences(test2) << endl;  // Expected: 3
    return 0;
}