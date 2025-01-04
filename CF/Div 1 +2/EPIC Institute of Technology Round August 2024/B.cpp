// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int n;
//         cin>>n;
//         vector<int> a(n), b(n);

//         for (int i=0;i<n;i++)
//             cin >>a[i];

//         for (int i=0;i<n;i++)
//             cin >>b[i];

//         for(int i=0;i<n-1;i++){

//             if(i%2==0){
//                 a.erase(a.begin());
//                 b.erase(b.begin());
//             }
//             if(i%2==1){
//                 a.pop_back();
//                 b.pop_back();
//             }
//         }

//         cout<< (a==b ? "Bob":"Alice");

//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin>>n;

        vector <int> a(n),b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector <int> c =b;

        reverse(c.begin(),c.end());

        if(a==b || a==c)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";

    }

    return 0;
}