#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v; // ->>>> v= {}
    v.push_back(1); // ->>>>>> v = {1}
    v.emplace_back(2); // ->>> v ={1, 2} //this is faster

    vector<pair<int, int>> a;
    a.push_back({1, 2});
    a.emplace_back(3,4);


    vector<int> d(5, 100); // declared a vector of size 5 haveing values as 100
    vector<int> g(5); // decalred a vector of size 5 having values as garbage value

    vector<int> f(5, 30);
    vector<int> g(f); // f vector gets copied inside g vector

    //even after delclaring the size of vector we can add elements to it.


    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << "";

    it = it + 2;
    cout << *it << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();
    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 4); // will remover elements from index 1 to 3
    
    vector<int> j(2, 20);
    j.insert(v.begin(), 200);
    j.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 200);
    j.insert(j.begin(), copy.begin(), copy.end());

    cout << v.size();

    v.pop_back();


    v.clear(); // clears whole vector

    cout << v.empty(); // returns true if vector is empty
    
    return 0;
}