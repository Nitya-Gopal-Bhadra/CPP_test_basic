#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here //stores unique elements in no particular order //lower and upper bound not supported
    //average time complexity of insert, erase and find is O(1)
    unordered_set<int> us;
    us.insert(5);
    us.insert(5);
    us.insert(5);
    us.erase(5); // O(1) will delete only one
    cout << us.count(5) << endl; // O(1)
    return 0;
}