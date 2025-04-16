#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(0);
    ls.emplace_front(-1);

    //rest other function same as vector
    // begi, end, rbegin, rend, clear, insert, size, swap, empty, etc.

    return 0;
}