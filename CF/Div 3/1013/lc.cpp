#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> firstSmallerIndexToRight(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);  // initialize result with -1
    stack<int> st;              // stack to store indices

    // traverse from rightmost element to left
    for (int i = n - 1; i >= 0; i--) {
        // pop until the current element is greater than stack's top element
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        // if stack is not empty, top element is first smaller number's index
        if (!st.empty()) {
            result[i] = st.top();
        }
        // push current index onto the stack
        st.push(i);
    }
    return result;
}

int main() {
    // Example input: 5 7 2 3 1 4
    vector<int> arr = {5, 7, 2, 3, 1, 4};

    vector<int> output = firstSmallerIndexToRight(arr);

    // Print output
    for (int idx : output) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
