#include <bits/stdc++.h>
using namespace std;

string determine_pattern(int a, int b, int c) {
    if (a < b && b < c) {
        return "STAIR";
    } else if (a < b && b > c) {
        return "PEAK";
    } else {
        return "NONE";
    }
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << determine_pattern(a, b, c) << endl;
    }

    return 0;
}