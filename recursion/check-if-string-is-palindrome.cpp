#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int i, int n){
    if(i >= n / 2){
        return true;
    }
    if(str[i] != str[n - i - 1]) return false;
    return isPalindrome(str, i + 1, n);
}
int main(){

    string str = "MADAM";
    bool tf = isPalindrome(str, 0, str.size());
    if(tf){
        cout <<  "true" << endl;
    } else {
        cout <<  "false" << endl;
    }
    return 0;
}