#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here //max heap

    priority_queue<int> pq;
    pq.push(10);    
    pq.push(90);
    pq.emplace(20);
    pq.emplace(15);

    cout<<pq.top()<<endl;
    pq.pop();   

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;  

    //minimum heap //min proirity queue
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(10);
    minheap.push(90);
    minheap.emplace(20);
    minheap.emplace(15);

    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;
    cout<<minheap.size()<<endl; 
    
    return 0;
}