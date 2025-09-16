/*You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


Examples:
Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.

Input: n = 123

Output: 321

Explanation: Reverse of 123 is 321.*/

#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) 
                return 0;  // Check for overflow before proceeding
            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    };



int main() {
    // Your code starts here
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    
    return 0;
}