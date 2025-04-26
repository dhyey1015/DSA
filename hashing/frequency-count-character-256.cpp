#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cout << "Enter any string: ";
    cin >> s;
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cout << "Enter the number of characters you are going to provide: ";
    cin >> q;

    while(q--){
        char c;
        cout << "Enter a character: ";
        cin >> c;
        cout << "The count of the character " << c << " is:" << hash[c] << endl;
         
    }
    return 0;
};