#include<bits/stdc++.h>
using namespace std;

int factorialOfN(int n){
    if(n == 1){
        return 1;
    }
    return n * factorialOfN(n-1);
}

int main(){

    int n;
    cin >> n;
    cout << factorialOfN(n) << endl;

    return 0;
}