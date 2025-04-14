#include<bits/stdc++.h>
using namespace std;


int main(){
    for(int i = 4; i >= 0; i--){
        for(int j = 0; j < 5 - i - 1; j++){
            cout << " ";
        }
        for(int k = 0; k < i * 2 + 1; k++){
            cout << "*";
        }
        for(int l = 0; l < 5 - i - 1; l++){
            cout << " ";
        }
        cout << "\n";
    }
}