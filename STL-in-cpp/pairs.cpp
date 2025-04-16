#include <bits/stdc++.h>
using namespace std;

int main(){
    // pairs comes under utility library
    pair<int, int> p = {3, 4};
    cout << p.first << " " << p.first;

    pair<int, pair<int,int>> b = {1, {2, 3}};
    cout << b.first << " " << b.second.first << " " << b.second.second;
    
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first;


    return 0;
}