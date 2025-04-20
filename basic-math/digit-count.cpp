#include<bits/stdc++.h>
using namespace std;

int main(){
    //give any number it will extract each digit and print it
    int n,count = 0;
    cin >> n;
    cout << "Your number: " << n << endl;

    // we can use this to count number of digits in number 
    while(n > 0){
        int lastDigit = n % 10;
        n = n / 10;
        count++;
        cout << lastDigit << " " ;
    }
    cout << count << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // idk why its not working
    // // another way to count digit 
    // int count1 = (int)(log10(n) + 1);
    // cout << count1 << endl;
    return 0;
}