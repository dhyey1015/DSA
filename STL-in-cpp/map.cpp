#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2, 4});
    // {
    //     {1, 2},
    //     {2, 4},
    //     {3, 1},
    // }
    mpp3[{1,1}] = 10; 

    return 0;

    for(auto it: mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[2];
    cout << mpp[5];
    
    // not working
    // auto it = mpp.find(3);
    // cout << *(it).first;

    auto it1 = mpp.find(5); // poitns to mpp.end()

    auto it2 = mpp.upper_bound(2);
    auto it3 = mpp.upper_bound(3);

    // erase swap size empty are same as above

}