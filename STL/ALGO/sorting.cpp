#include <bits/stdc++.h>

using namespace std;



// Comparator function for sorting
bool comp(pair <int,int> p1, pair <int,int> p2)
{
    if(p1.second < p2.second)
        return true;
    if(p1.second > p2.second)
        return false;

    if(p1.first > p2.first)
        return true;
    return false;   
}

int main() {
    // Your code starts here

     // Your code starts here

    //sort(a,a+n)

    //for vector // sort (v.begin(),v.end());
    //range based sort sort(a+2,a+5)    

    //descending order // (a, a+n, greater<int>())

    //my way of sorthing //custom sorting
   


    //sort(a,a+n)

    //for vector // sort (v.begin(),v.end());
    //range based sort sort(a+2,a+5)    

    //descending order // (a, a+n, greater<int>())

    //my way of sorthing //custom sorting
    pair <int,int> a[] = {{1,2},{2,1},{4,1}};
    int n = sizeof(a)/sizeof(a[0]);

    //sort by second element 
    //if second element is same then sort by first element
    //sort it according to first element but in descending order
    sort(a, a+n, comp);

    // Optional: print sorted array
    for(int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << endl;
    }

    return 0;
}