#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_BIT = 31;  // log2(2 * 10^5) + 1

long long solve(long long l, long long r) {
    vector<long long> bitCount(MAX_BIT, 0);
    long long result = 0;

    for (int bit = 0; bit < MAX_BIT; ++bit) {
        long long start = max(l, (1LL << bit));
        if (start > r) break;

        long long end = min(r, (1LL << (bit + 1)) - 1);
        long long count = end - start + 1;

        bitCount[bit] += count;
    }

    for (int bit = 0; bit < MAX_BIT; ++bit) {
        result += bitCount[bit];
        if (bit < MAX_BIT - 1) {
            bitCount[bit + 1] += bitCount[bit] / 2;
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;
        cout << solve(l, r) +1<< "\n";
    }

    return 0;
}