/*Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.*/

#include <bits/stdc++.h>

using namespace std;

bool isArmstrong(int N) {
   int dup = N;

   int sum = 0;

   while (N>0){
    int digit = N%10;
    sum = sum+digit*digit*digit;
    
    N = N/10;   

   }

   if (sum == dup){
    cout << "true";
   }
   else{
    cout << "false";
   }
}
    
int main() {
    // Your code starts here

    int N;
    cin>>N;
    isArmstrong(N);

    return 0;
}