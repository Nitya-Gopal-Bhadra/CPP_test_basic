#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here
    pair <int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair <int, pair <int, int>> p1 = {3, {1, 2}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    return 0;
}