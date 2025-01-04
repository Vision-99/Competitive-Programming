#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_permutation(const vector<int>& arr) {
    if (arr.empty()) return true;
    int n = arr.size();
    vector<bool> seen(n + 1, false);
    for (int x : arr) {
        if (x < 1 || x > n || seen[x]) {
            return false;
        }
        seen[x] = true;
    }
    return true;
}

bool solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < (1 << (n * (n - 1) / 2)); ++i) {
        vector<int> p(n);
        vector<vector<int>> assignments(n+1);
        vector<int> available_numbers;
        for(int k = 1; k <= n; ++k) available_numbers.push_back(k);

        int temp = i;
        bool possible = true;
        for(int j = 0; j < n; ++j){
            if(s[j] == 'p'){
                if(j == 0){
                    p[j] = 1;
                    assignments[1].push_back(1);
                    available_numbers.erase(remove(available_numbers.begin(), available_numbers.end(), 1), available_numbers.end());
                } else {
                    vector<int> sub_arr;
                    for(int k = 0; k <= j; ++k) sub_arr.push_back(p[k]);
                    if(!is_permutation(sub_arr)){
                        possible = false;
                        break;
                    }
                }
            }
            if(s[j] == 's'){
                vector<int> sub_arr;
                for(int k = j; k < n; ++k) sub_arr.push_back(p[k]);
                if(!is_permutation(sub_arr)){
                    possible = false;
                    break;
                }
            }
            if(s[j] == '.'){
                if(available_numbers.empty()){
                    possible = false;
                    break;
                }
                p[j] = available_numbers[0];
                available_numbers.erase(available_numbers.begin());
            }

        }
        if(!possible) continue;
        
        if(is_permutation(p)) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}