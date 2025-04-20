#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    set<int> s; // store the values in set if you want it in sorted order;
    cout << "All divisors of number: "<< n << endl;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            int multipliedValue = n / i; // getting the value that will be multipled with i
            if(i != multipliedValue){
                cout << i << ", ";
                cout << multipliedValue << ", ";
            } else {
                cout << i << ", ";
            }
        }
    }
    cout << endl;
    return 0;
}