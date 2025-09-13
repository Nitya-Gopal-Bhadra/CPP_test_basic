#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    vector <int> v;
//pure vector
    v.push_back(1);  //takes input from back
    v.emplace_back(2);
    v.emplace_back(9);

    //as pair

    vector <pair<int,int>> p;

    p.emplace_back(1,2);

    //now init the value ;

    vector <int> v1(5, 100); //5 elements with value 100
    vector <int> v2(5); //5 elements with value 0
    vector <int> v3(v1); //copy v1 to v3
    vector <int> er1 ;
    er1.emplace_back(100);
       er1.emplace_back(200);

          er1.emplace_back(300);

             er1.emplace_back(400);


             er1.erase(er1.begin()+1); //removes 2nd element
             er1.erase(er1.begin(),er1.begin()+2); //removes 1st and 2nd elements

             for (auto it1 : er1) {
                 cout << it1 << " " << "  erase concept  ";  // it gives the value
             }
             cout << endl;  

    vector<int>::iterator it;
for (it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << " " << "  iterator loop concept ";  // *it gives the value
}

cout << endl;  // ✅ Add this to make sure output is visible

// insert in vector 

vector<int> v4(3,10); // 3 elements with value 10
v4.insert(v4.begin(),5); // 5 10 10 10
v4.insert(v4.begin()+1,2,20); // 5 20 20 10 10 10

for (auto it4 = v4.begin(); it4 != v4 .end(); ++it4) {
    cout << *it4 << " " << "  iterator loop concept with insert value   ";  // *it gives the value
}

cout << endl;  // ✅ Add this to make sure output is visible

//swap

v1.swap(v4); //swaps v1 and v4


for (auto it : v1) {
    cout << it << " " << "  auto wit for each loop concept ";;  // it gives the value   
}
cout << endl; 

    cout << v.front() << "   front concept"<< endl;
    cout<<v.back()<<"   back concept"<<endl;
    cout<<v.size()<<"   size concept"<<endl;
   cout<<v.at(2)<<"   at concept"<<endl;
   cout <<p[0].first<<" "<<p[0].second<< "   index concept"<<endl;


    
    return 0;
}