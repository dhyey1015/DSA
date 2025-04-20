#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;

    cout << "Your number is: " << n << endl;
    int copyOfN = n;
    
    while(n > 0){
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }
    
    cout << "sum of cubied digits is: " << sum << endl;
    cout << "The number is: ";
    if(copyOfN == sum) cout << "Armstrong number" << endl;
    else cout << "Not Armstrong number" << endl;

    return 0;
}