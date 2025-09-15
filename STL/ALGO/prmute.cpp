#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    string s = "321";
    sort(s.begin(), s.end());   

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
   

    return 0;
}