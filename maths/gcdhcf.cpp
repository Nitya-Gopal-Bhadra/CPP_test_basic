/*You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


Examples:
Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
   while(a>0 && b>0){
       if(a>b){
           a=a%b;
       }
       else{
           b=b%a;
       }
   }
   if(a==0) return b;
   else return a;
   return a+b;
}

int main() {
    // Your code starts here
    int n1, n2;
    cin >> n1 >> n2;
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;  
    return 0;
}