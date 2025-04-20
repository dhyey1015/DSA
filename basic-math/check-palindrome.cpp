#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, reverseNum = 0;
    cin >> n;
    cout << "Your number is: " << n << endl;
    int copyOfN = n;
    while(n > 0){
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n /= 10;
    }
    cout << "Reversed number is: "<< reverseNum << endl;
    cout << "The number is: ";

    if(copyOfN == reverseNum) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
        

    return 0;
}