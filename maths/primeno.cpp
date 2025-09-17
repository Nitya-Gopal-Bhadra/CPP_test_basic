#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i != i) {
                count++; // to count the pair factor
                if (count == 2)
                    return true; // no need to check further if count exceeds 2
            }
        }
    }
    return false; // missing return statement added here
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}
