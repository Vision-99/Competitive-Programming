#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define nl endl
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vc = vector<char>;
using vs = vector<string>;
using umpii = unordered_map<int, int>;
using umpci = unordered_map<char, int>;
using umpsi = unordered_map<string, int>;
#define fl(i, n) for (int i = 0; i < n; i++)

int max(int a, int b, int c) { return max(a, max(b, c)); }
int min(int a, int b, int c) { return min(a, min(b, c)); }
int vmax(vector<int> &a) { return *max_element(a.begin(), a.end()); }
int vmin(vector<int> &a) { return *min_element(a.begin(), a.end()); }
int sum1(int n) { return n * (n + 1) / 2; }
int sum2(int n) { return n * (n + 1) * (2 * n + 1) / 6; }
int sum3(int n) { return n * n * (n + 1) * (n + 1) / 4; }
int vsum(vector<int> &a)
{
    int sum = accumulate(a.begin(), a.end(), 0);
    return sum;
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
bool isvowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int ceil(int a, int b)
{
    int ans = (a + b - 1) / b;
    return ans;
}
