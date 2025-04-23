#include<bits/stdc++.h>
using namespace std;

int sumOfFirstNNumbers(int i){
    if(i == 0){
        return 0;
    }
    return i + sumOfFirstNNumbers(i-1);
}

int main(){

    int n;
    cin >> n;
    cout << sumOfFirstNNumbers(n) << endl;

    return 0;
}