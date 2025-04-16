#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top();
    st.pop(); // {4, 3, 2, 1}
    
    cout << st.top();
    cout << st.size();
    cout << st.empty();
    return 0;

    stack<int> st2;
    st2.push(2);
    st2.push(3);

    st.swap(st2);

    return 0;
}