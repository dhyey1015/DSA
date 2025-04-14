#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j < i * 2 + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < 5 - i - 1; j++){
            cout << " ";
        }
        cout << "\n";
    }

    for(int k = 4; k >= 0; k--){
        for(int j = 0; j < 5 - k - 1; j++){
            cout << " ";
        }

        for(int j = 0; j < k * 2 + 1; j++){
            cout << "*";
        }
        
        for(int j = 0; j < 5 -  - 1; j++){
            cout << " ";
        }
        cout << "\n";
    }
}