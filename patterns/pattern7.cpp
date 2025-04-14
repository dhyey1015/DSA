#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5 - i - 1; k++){
            cout << " ";
        }
        for(int j = 0; j < i * 2 + 1; j++){
            cout << "*";
        }
        for(int l = 0; l < 5 - i - 1; l++){
            cout << " ";
        }
        cout << "\n";
    }
}