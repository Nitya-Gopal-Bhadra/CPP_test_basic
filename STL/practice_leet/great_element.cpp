#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // size of array

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // read array elements
    }

    stack<int> s;
    vector<int> result(n); // store next greater elements

    for(int i = 0; i < n; i++) {
        while(!s.empty() && arr[i] > arr[s.top()]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i); // store index
    }

    // Remaining elements have no next greater
    while(!s.empty()) {
        result[s.top()] = -1;
        s.pop();
    }

    // Print the result
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
