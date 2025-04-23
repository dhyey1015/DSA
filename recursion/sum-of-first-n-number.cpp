#include<bits/stdc++.h>
using namespace std;

int printSumOfNNumbers(int i, int n, int sum){
    if(i > n){
        return sum;
    }
    sum += i;
    return printSumOfNNumbers(i + 1, n, sum);
}

int main(){

    int n;
    cin >> n;
    int sum = printSumOfNNumbers(1, n, 0);
    cout << "Sum of first " << n << " numbers is: " << sum << endl;

    return 0;
}