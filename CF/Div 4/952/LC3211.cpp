#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> ans = {"1001", "0011", "0000", "1010"};

    // Remove elements that contain "00"
    ans.erase(
        remove_if(
            ans.begin(),
            ans.end(),
            [](const string &x)
            { return x.find("00") != string::npos; }),
        ans.end());


    // Print the modified vector
    for (const auto &x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
