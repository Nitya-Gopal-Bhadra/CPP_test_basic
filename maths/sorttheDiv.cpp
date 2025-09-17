/*36 = 1
18 = 2
12 = 3
9 = 4
6 = 6 //after this square root we will start printing from n/i //like root sq of 36 is 6 after that numbers will grow in reverse order
4 = 9
3 = 12
2 = 18
1 = 36/*You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.*/

#include <bits/stdc++.h>

using namespace std;

int sorti(int n){

    vector <int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            cout<<i<<" ";
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it: ls){
        cout<<it<<" ";
    }
}

int main() {
    // Your code starts here
    int n;
    cin>>n;
    sorti(n);
    return 0;
}