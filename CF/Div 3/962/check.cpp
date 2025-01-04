#include <iostream>
#include <iomanip>
using namespace std;

double harmonic_number(int n) {
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        result += 1.0 / i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n must be a positive integer!" << endl;
        return 1;
    }

    cout << "Harmonic number H(" << n << ") = " << fixed << setprecision(6) << harmonic_number(n) << endl;
    return 0;
}
