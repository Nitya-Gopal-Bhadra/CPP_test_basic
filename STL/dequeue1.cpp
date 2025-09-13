#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    deque <int> dq;

    dq.push_back(10);
    dq.emplace_back(20);    
    dq.push_front(5);
    dq.emplace_front(2);


    dq.insert(dq.begin() +2,15); //15 2 5 10 20

     dq[2] = 30; //indexing 15 is replaced by 30

    for (auto it:dq) {
        cout << it << " ";
    }   
    
    return 0;
}