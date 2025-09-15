/*1. Next Greater Element (using stack)

Problem:
Given an array arr, for each element find the next greater element. If no greater element exists, return -1.
Example:
Input: [4, 5, 2, 25]
Output: [5, 25, 25, -1] */


#include <bits/stdc++.h>

using namespace std;



int main() {
    // Your code starts here

    stack <int> s;

    //int n = s.size();



   // cout << "Enter the size of array: ";

    //cin >> n;

    s.emplace(4);
     s.emplace(5);
      s.emplace(2);
       s.emplace(25);

// Print and pop elements from the stack (LIFO order)
while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
}

    
    return 0;
}