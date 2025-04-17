#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.emplace(3); // {1,2,3 }

    q.back() += 5;

    cout << q.back(); //{1,2, 8}

    cout << q.front(); //prints 1

    q.pop(); // {2, 8}

    cout << q.front(); //prints 2

    return 0;
}