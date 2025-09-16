#include <bits/stdc++.h>
using namespace std;

int printo(int n) {

    while (n > 0)
    {
        /* code */

        int last_digit = n % 10; ///let the number 2234 be given it will give 4 in modulus then we will print it and then we will do n=n/10 then again it will give 3 and so on
        cout<<last_digit;   
        n = n / 10;

    }
    return 0;
}

using namespace std;

int main() {
    // Your code starts here
    int n;

    cin>>n;

    printo(n);
    
    return 0;
}