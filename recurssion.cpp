#include <iostream>
using namespace std;


int factor(int n){

    if(n == 1)
     return 1;
    else if (n==0)
    return 1;
    else
    return n * factor(n - 1);
}

int main() {
  
    int n;
   
    cout << "enter a number " ;
    cin >> n;
    cout << "Factorial of "<< n<< " is " << factor(n) << endl;
    return 0;
}
