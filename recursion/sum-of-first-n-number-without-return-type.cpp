#include<bits/stdc++.h>
using namespace std;

void printSumOfNNumbers(int i, int n, int sum){
    if(i > n){
        cout << "Sum of first " << n << " numbers is: " << sum << endl;
        return;
    }
     printSumOfNNumbers(i + 1, n, sum + i);
}

int main(){

    int n;
    cin >> n;
    printSumOfNNumbers(1, n, 0);
    
    return 0;
}