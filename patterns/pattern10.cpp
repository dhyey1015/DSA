#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= 2 * n - 1; i++){ // n = 5
        int stars = i;
        if(i > n) stars = 2 * n - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << "\n";
    }
}