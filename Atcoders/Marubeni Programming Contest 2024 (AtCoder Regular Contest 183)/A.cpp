#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll factorial(int n) {
    ll result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

ll combination(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void findSequence(int N, int K, ll target, vector<int>& result, vector<int>& count, int position) {
    if (position == N * K) return;
    
    for (int num = 1; num <= N; ++num) {
        if (count[num - 1] < K) {
            count[num - 1]++;
            ll remainingSlots = N * K - position - 1;
            ll remainingSlotsPerNum = K - count[num - 1];
            
            ll possibleSequences = combination(remainingSlots, remainingSlotsPerNum);
            if (target < possibleSequences) {
                result.push_back(num);
                findSequence(N, K, target, result, count, position + 1);
                return;
            } else {
                target -= possibleSequences;
            }
            
            count[num - 1]--;
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    
    ll totalSequences = factorial(N * K) / (pow(factorial(K), N));
    ll targetIndex = (totalSequences + 1) / 2 - 1;
    
    vector<int> result;
    vector<int> count(N, 0);
    findSequence(N, K, targetIndex, result, count, 0);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
