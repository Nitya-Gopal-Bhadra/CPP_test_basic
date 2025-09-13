#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here //we can store duplicate keys in multimap

    multimap<int, int> mmap;
    mmap.insert({1, 10});
    mmap.insert({2, 20});           
    mmap.insert({1, 30});           //duplicate key
    mmap.insert({3, 40});

    auto it = mmap.find(1);       //find function returns iterator to the first occurrence of key
    if (it != mmap.end()) {         //if key is found
        cout << "Key found: " << it->first << ", Value: " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }   

    
    return 0;
}