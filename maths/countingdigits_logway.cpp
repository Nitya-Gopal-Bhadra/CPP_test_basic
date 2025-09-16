#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here
    

    int n;

    cin >> n;
    int count = (int) log10(n) + 1;
    cout << count;

    return 0;
}

//let me explain how this works
//log10(n) gives the power to which 10 must be raised to get n  suppose log10(1234) = 3.0914
//this means if we add 3.0914 to 1 we get 4.0914
//now if we take the integer part of this value we get 4 which is the number of digits in 1234
//this works for all numbers except 0