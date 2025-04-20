#include<bits/stdc++.h>
using namespace std;

int main(){
    // time complexity is O(sqrt(n)) fro reason check give-all-divisors-of-number.cpp
    int n, counter = 0;
    cin >> n;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            int multipliedValue = n / i;
            if(multipliedValue != i){
                counter += 2;
            } else {
                counter++;
            }
        }
    }
    cout << "The Number Provided is " << n;
    if(counter == 2){
        cout << ", is a Prime Number" << endl;
    } else {
        cout << ", is not a Prime Number" << endl;
    }
    return 0;
}