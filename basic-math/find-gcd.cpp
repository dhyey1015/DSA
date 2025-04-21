#include<bits/stdc++.h>
using namespace std;

int main(){
    // time complexity is O(log base (fi) (min(a,b)))
    int n1 = 52;
    int n2 = 10;
    int gcd = 1;

    while(n1 > 0 && n2 > 0){
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }

    if(n1 == 0) gcd = n2;
    else gcd = n1;

    cout << "GCD is : " << gcd << endl;

    return 0;
}