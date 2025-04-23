#include<bits/stdc++.h>
using  namespace std;

void print(int i , int n){
    if(i < 0){
        return;
    }
    print(i - 1, n);
    // can do better;
    if(n - i == 0){
        return;
    }
    cout << n - i << endl;
}

int main(){

    int n;
    cin >> n;
    print(n, n);

    return 0;
}
