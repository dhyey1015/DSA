#include<bits/stdc++.h>
using  namespace std;

int main(){

    string s;
    cout << "enter the string: ";
    cin >> s;

    // precalculation 
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cout << "enter total number of character you want tio check: ";
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        cout << "the count of the " << c << " is: "<< hash[c - 'a'] << endl;

    }

    return 0;
}