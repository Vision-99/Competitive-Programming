#include <bits/stdc++.h>
using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)

using vi = vector<int>;
using ll = long long;




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);


    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long count = 0;
    for (int i = 0; i < N; ++i) {
        int j = i + 1;
        while (j < N && A[j] - A[j-1] == A[i+1] - A[i]) {
            ++j;
        }
        count += (j - i);
        i = j - 1;
    }

    cout << count << endl;
    return 0;
}