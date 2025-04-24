#include<bits/stdc++.h>
using namespace std;
void factorialOfN(int n, int sum){
    if(n < 1){
        cout << sum << endl;
        return;
    }
    factorialOfN(n - 1, sum * n);
}
int main(){

    int n;
    cin >> n;
    factorialOfN(n, 1);

    return 0;
}