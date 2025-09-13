#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

 vector <int> v;
    v.push_back(1);  //takes input from back
    v.emplace_back(2); //faster than push_back dynamically increase size of vector
    vector pair <int, int> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); //faster than push_back // no need to do curly braces

    vector <int> v1(5, 100); //5 elements with value 100
    vector <int> v2(5); //5 elements with value 0
    vector <int> v3(v1); //copy v1 to v3



    //accessing elements
    cout << v1[0] << " " << v1.at(0) << endl; //both are same but at() does bound checking
    cout << v1.size() << endl; //size of vector
    //iterator
    vector<int>::iterator it = v.begin();  //points to the memory address // not to the element
   //  vector<int>::iterator it = v.rbegin(); // point last element
    vector<int>::iterator it = v.end(); //right after the last element like n-1
    // vector<int>::iterator it = v.rend();   // point first element

    cout << v.back() << endl; //last element
    cout << v.front() << endl; //first element

    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    it++;

    cout << *(it) << " " ;


    return 0;
}