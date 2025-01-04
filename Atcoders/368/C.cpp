// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;

// vector<int> a(n);

// for (int i = 0; i < n; i++)
// {
//     cin>>a[i];
// }

// int t=1;

// for(int i=0;i<n;i++){

//     while(a[i]>0){
//         if(t%3==0)  a[i] -=3;
//         else    a[i]--;

//         t++;
//     }
// }
// cout<<t-1; /*In your current implementation,
//  T is incremented even after the last attack 
//  that reduces the health of the last enemy to 0 or less*/
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long t = 0;  // Initialize T to 0

    for (int i = 0; i < n; i++) {
        
            // Calculate the number of full sets of three attacks
            long long fullSets = a[i] / 5;
            t += fullSets * 3; // Each set of 3 attacks takes 3 units of time
            a[i] -= fullSets * 5;

            // Deal with the remaining health, if any
            while(a[i] > 0) {
                t++;
                if(t%3==0)  a[i] -=3;
                else    a[i]--;
            }
        
    }

    cout << t << endl;
    return 0;
}
