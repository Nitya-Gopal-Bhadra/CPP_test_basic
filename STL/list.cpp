#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    list <int> ls;

    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(5);   
    ls.emplace_front(2);

    for (auto it:ls) {
        cout << it << " ";
    }   
    cout << endl;   


    return 0;
}