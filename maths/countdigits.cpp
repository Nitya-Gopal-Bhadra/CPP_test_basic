/*You are given an integer n. You need to return the number of digits in the number.



The number will have no leading zeroes, except when the number is 0 itself.


Examples:
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.*/


#include <bits/stdc++.h>

int counter(int n){

    int count = 0;

    if (n==0)
    {
        /* code */
        return 1;
    }
    while (n>0)
    {
        /* code */
        int ld = n%10;
        count++;
        n = n/10;
    }
    return count;

}

using namespace std;

int main() {
    // Your code starts here

    int n;
    cin>>n;
    cout<<counter(n);


    
    
    return 0;
}