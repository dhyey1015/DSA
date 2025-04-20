#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , reverseNum = 0;
    cin >> n;

    cout << "Your number is: " << n  << endl;

    while(n > 0){
        int lastDigit = n % 10;
        n /= 10;
        reverseNum = (reverseNum * 10) + lastDigit;
    }

    cout << "Reversed number is: " << reverseNum << endl;

    return 0;
}