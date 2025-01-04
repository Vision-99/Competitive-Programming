#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;
        string pattern1(2 * n, '#');
        string pattern2(2 * n, '.');

        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (i % 2 == 0 ? pattern1 : pattern2);
                cout << (i % 2 == 0 ? pattern2 : pattern1);
            }
            cout << endl;
        }
    }

    return 0;
}