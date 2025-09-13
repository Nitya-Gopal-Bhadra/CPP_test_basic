#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    queue<int> q;
    q.push(10); 
    q.push(20);
    q.push(30);
    q.emplace(40);

    q.back() += 5;


    cout << "The front element is: " << q.front() << endl;
    cout << "The back element is: " << q.back() << endl;
    cout << "The size of the queue is: " << q.size() << endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout << "The front element is: " << q.front() << endl;  
    
    return 0;
}