#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<char> S(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> S[i];
    }

    int leftHand ;
    int rightHand ;
    int fatigue = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'L'){ 
            leftHand = A[i];
            break;}
    }
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'R'){ 
            rightHand = A[i];
            break;}
    }

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'L') {
            fatigue += abs(leftHand - A[i]);
            leftHand = A[i];
        } else {
            fatigue += abs(rightHand - A[i]);
            rightHand = A[i];
        }
    }

    cout << fatigue << endl;
    return 0;
}
