#include <iostream>
using namespace std;

void ToH(int n, char S, char D, char A) {
    if (n == 1) {
        cout << "Move disk 1 from " << S << " to " << D << endl;
        return;
    }
    ToH(n - 1, S, A, D);                          // move n-1 from S -> A (using D)
    cout << "Move disk " << n << " from " << S << " to " << D << endl;  // move largest
    ToH(n - 1, A, D, S);                          // move n-1 from A -> D (using S)
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    ToH(n, 'S', 'A', 'D');   // S = Source, A = Auxiliary, D = Destination
    return 0;
}
