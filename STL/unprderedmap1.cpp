#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here //we cannot store duplicate keys in unordered_map but order is not maintained
    unordered_map<int, int> umap;
    umap.insert({1, 10});           
    umap.insert({2, 20});           
    umap.insert({1, 30});           //duplicate key, will update the value      
    umap.insert({3, 40});

    for (const auto &pair : umap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }   
    
    return 0;
}