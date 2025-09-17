/*You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



A number which completely divides another number is called it's divisor.*/

#include <bits/stdc++.h>

using namespace std;

int printDiv(int n){

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(n%i==0){
            cout<<i<<" ";
        }   
    }
    
}





int main() {
    // Your code starts here
int n;

cin>>n;

printDiv(n);
    
    return 0;
}