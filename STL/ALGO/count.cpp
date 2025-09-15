#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here


    int num = 7;
    int cnt = __builtin_popcount(num);


    long long num2 = 1234567890123;
    int cnt2 = __builtin_popcountll(num2);

    cout << cnt << endl;
    cout << cnt2 << endl;

    return 0;
}