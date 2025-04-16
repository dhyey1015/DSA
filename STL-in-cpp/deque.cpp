#include <bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();

    //rest other function same as vector
    // begi, end, rbegin, rend, clear, insert, size, swap, empty, etc.

    return 0;
}