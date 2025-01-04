#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        bool deleteFlag = false;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (!deleteFlag) {
                    count++;
                    deleteFlag = true;
                } else {
                    count += 2;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}