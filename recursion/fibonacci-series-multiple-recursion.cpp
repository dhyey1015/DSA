#include <bits/stdc++.h>
using namespace std;

int fibonacciSeriesNumber(int n){
    if(n <= 1) return n;
    int last = fibonacciSeriesNumber(n - 1);
    int slast = fibonacciSeriesNumber(n - 2);
    return last + slast;
}

int main(){

    int n = 4;
    cout << fibonacciSeriesNumber(n) << endl;

    return 0;
}