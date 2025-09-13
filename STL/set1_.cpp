#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    //stores in an unique order and sorted order
    set <int> s;
    s.insert(5);    
    s.insert(2);
    s.insert(8);
    s.emplace(1);
    s.insert(10);
    s.insert(19);
    s.insert(15);
    s.insert(7);    
    

    s.insert(5); //duplicate value will not be inserted

    auto it = s.find(5); //returns iterator to the element if found else returns s.end()
    if (it != s.end()) {
        s.erase(it); //erases the element at the iterator position
    }   


    //if s.find(6) is not there it will resturn == s.end()
    if (s.find(6) != s.end()) { 
        s.erase(s.find(6));
    } else {
        cout << "6 is not present in the set" << endl;
    }   


    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;


    int cnt = s.count(5); //returns 1 if present else 0
    cout << "5 is present " << cnt << " times in the set" << endl;



    auto it1 = s.find(2); //returns iterator to the element if found else returns s.end()
    auto it2 = s.find(8);   //returns iterator to the element if found else returns s.end()

    s.erase(it1, it2); //erases the elements in the range [it1, it2)

    for (auto it : s) {
        cout << it << " ";
    }   

    
auto it3 = s.lower_bound(7); //returns iterator to the first element which is not less than 7
auto it4 = s.upper_bound(15); //returns iterator to the first element which is  greater than 15
cout << "lower bound of 7 is " << *it3 << endl;     
cout << "upper bound of 15 is " << *it4 << endl;    

    // Your code ends here
    return 0;
}   