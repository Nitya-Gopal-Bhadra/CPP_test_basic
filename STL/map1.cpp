#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here
    //key and value pair key is unique
    map <int , int> mp1;
    map <int , pair<int , int>> mp2;
    map <pair<int , int> , int> mp3;

    mp1[1] = 2;
    mp1.emplace(3 , 4);
    mp1.insert({5 , 6});


    mp3[{1 , 2}] = 3;
    mp3[{4 , 5}] = 6;

    for (auto it = mp1.begin(); it != mp1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }


     for (auto it = mp3.begin(); it != mp3.end(); it++)
    {
        cout << it->first.first << " " << it->first.second << " " << it->second << endl;
    }



    cout << mp1.size() << endl; 
    cout << mp1[1] <<endl;
    cout << mp1[2] << endl; //if key not present then it will return 0

    cout << mp1.count(1) << endl; //if key present then it will return 1 else 0
    cout << mp1.count(2) << endl;   


    //access the value

    auto it = mp1.find(3); //if key present then it will return iterator to that key else it will return mp1.end()
    if (it != mp1.end())    
    {
        cout << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }       


    
    return 0;
}