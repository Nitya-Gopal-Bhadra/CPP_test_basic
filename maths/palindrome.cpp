/*You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



A palindrome number is a number which reads the same both left to right and right to left.


Examples:
Input: n = 121

Output: true

Explanation: When read from left to right : 121.

When read from right to left : 121.

Input: n = 123

Output: false

Explanation: When read from left to right : 123.

When read from right to left : 321.*/

#include <bits/stdc++.h>

using namespace std;


int pal(int n){
    int rev=0,rem;
    int dup=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==dup){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

int main() {
    // Your code starts here

    int n;
    cin>>n;
    pal(n);
    return 0;
}

