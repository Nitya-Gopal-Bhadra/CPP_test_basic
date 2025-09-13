#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here it will store only in sorted not in unique order

    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
//ms.erase(5); // O(log n) will delete all

int cnt = ms.count(5); // O(log n)
    cout << cnt << endl;
    ms.find(5); // O(log n)

    ms.erase(ms.find(5)); // O(log n) will delete only one
    cnt = ms.count(5);      
    cout << cnt << endl;
    return 0;
}