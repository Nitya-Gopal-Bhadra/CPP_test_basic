#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here

    stack <int> st;

    st.push(1);
    st.push(2);
    st.push(8);
    st.push(9);
    st.emplace(4);
    

    cout<<st.top()<<endl; // 4
    st.pop(); // 4
    cout<<st.top()<<endl; // 9
    cout<<st.size()<<endl; // 4

    ///////LLLLLLLLLLIIIIIIIIIIIIIIIIIIIFFFFFFFFFFFFFFFOOOOOOOOOOO

    // Print and pop elements from the stack (LIFO order)
while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
}

    
    return 0;

    
    return 0;
}