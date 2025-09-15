#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    vector <int> a = {100, 42, 553, 44, 500};

    int maxi = *max_element(a.begin(), a.begin() + 3);
    cout << maxi << endl;

    int mini = *min_element(a.begin(), a.begin() + 3);
    cout << mini << endl;
    
    return 0;
}